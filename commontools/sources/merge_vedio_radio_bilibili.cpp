/**
 * B站手机缓存下载音频视频是分离，此程序为使用 ffmpeg 合并为一个文件。 
 * Author： jiesoul
 * Date：2020-03-01
 * 参数：文件目录
 * 自动支持 1080p 下分辨率。
 **/

#include <iostream>
#include <string>
#include <algorithm>
#include <filesystem>
#include <unistd.h>
#include <sys/types.h>


int main(int argc, char *argv[])
{
    std::string input(argv[1]);
    for (const auto& dir_entry : std::filesystem::directory_iterator(input)) {
        const std::string dir_path = dir_entry.path().string();
        auto const pos = dir_path.find_last_of("/");
        auto filename = dir_path.substr(pos + 1);
        if (filename.size() == 1) filename = "0" + filename;
        if (dir_entry.is_directory()) {
            int p = 16;
            while(p < 257) {
                std::filesystem::path new_path(dir_path + "/" + std::to_string(p));
                if (!std::filesystem::directory_entry(new_path).exists()) {
                    p *= 2;
                    continue;
                } else {
                    break;
                }
            }
            if (p > 256) {
                    std::cout << "目录：" << dir_path << " 下找不到相应视频音频目录" << std::endl;
                    continue;
            } else {
                const auto& video = dir_path + "/" + std::to_string(p) + "/video.m4s";
                const auto& audio = dir_path + "/" + std::to_string(p) + "/audio.m4s";
                std::string c = "ffmpeg -i " + video + " -i " + audio + " -c copy " + input + "/" + filename + ".mp4";
                std::cout << "begin exec：" << const_cast<char *>(c.c_str()) << std::endl;
                system(const_cast<char *>(c.c_str()));
            }
        } else {
            continue;
        }
    }
    return 1;
}