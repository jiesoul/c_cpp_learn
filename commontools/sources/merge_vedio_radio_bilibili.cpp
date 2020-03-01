/**
 * B站手机缓存下载音频视频是分离，此程序为使用 ffmpeg 合并为一个文件。 
 * Author： jiesoul
 * Date：2020-03-01
 * 
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
        std::cout << filename << std::endl;
        if (dir_entry.is_directory()) {
            const auto& video = dir_path + "/16/video.m4s";
            const auto& audio = dir_path + "/16/audio.m4s";
            std::string c = "ffmpeg -i " + video + " -i " + audio + " -c copy " + input + "/" + filename + ".mp4";
            std::cout << "begin exec：" << const_cast<char *>(c.c_str()) << std::endl;
            system(const_cast<char *>(c.c_str()));
        }
    }
    return 1;
}