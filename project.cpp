#include "project.h"

using namespace std;

Project::Project(void)
{

}

Project::Project(const char *Target)
{
    target_name = Target;
}

void Project::set_target_name(const char *Target)
{
    target_name = Target;
}

void Project::show(void)
{
    int i;
    for(i = 0; i < 20; i++)
    {
        cout << endl;
    }
    cout << source_name << endl;
    cout << target_name << endl;
}

void Project::new_folder(void)
{
    char path_command[1000] = "xcopy ";

    // 创建目标目录
    mkdir(target_name);

    // 复制源目录绝对路径至字符串 path_command
    strcat(path_command, source_name);
    // 字符串修改成 xcopy 源目录 目标目录 /e
    strcat(path_command, " ");
    strcat(path_command, get_target());
    strcat(path_command, " /e");
    // 执行命令
    system(path_command);
}

char *Project::path_add_double_quotation_marks(char *Path)
{
    // double quotation marks
    char s[1000] = "\"";
    strcat(s, Path);
    strcat(s, "\"");
    static char rtstr[1000];
    strcpy(rtstr, s);
    return rtstr;
}

char *Project::get_target(void)
{
    char path_target[1000];
    // 获取当前目录绝对路径
    getcwd(path_target, 1000);
    // 当前目录绝对路径后加 “\”
    strcat(path_target, "\\");
    // 目标目录的绝对路径
    strcat(path_target, target_name);

    // 目标路径加“ "" ”
    static char path_last[1000];
    strcpy(path_last, path_add_double_quotation_marks(path_target));
    cout << path_last << endl; 
    return path_last;
}
