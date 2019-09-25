//
// Created by JIESOUL on 2019/9/25.
//
#include "FileSystem.h"
#include "Directory.h"
Directory::Directory()
{
  std::size_t disks = tfs().numDisks();
}

