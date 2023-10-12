/*
目标：
    1、实现输入一条字符串，创建文件夹
    2、通过xcopy，将源目录的文件拷贝至所新建的文件夹里
*/


#include "global.h"
#include "project.h"

using namespace std;

// void get_what_typed(const char *name);

int main(void)
{
    char temp[1000];
    scanf("%[^\n]%*c", temp);

    Project prj(temp);
    prj.show();
    prj.new_folder();
    return 0;
}

// void get_what_typed(const char *name)
// {
//     char temp[1000];
//     scanf("%[^\n]%*c", temp);
//     name = temp;
//     return temp;
// }
