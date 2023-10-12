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
    char path_target_temp[1000];
    char path_not_used_temp[1000] = " \"";
    char path_command[1000] = "xcopy ";

    mkdir(target_name);
    getcwd(path_target_temp, 1000);
    strcat(path_target_temp, "\\");
    strcat(path_target_temp, target_name);
    strcat(path_not_used_temp, path_target_temp);  // 在目标路径前添加 "
    strcat(path_not_used_temp, "\" /e");
    strcat(path_command, source_name);
    strcat(path_command, path_not_used_temp);
    system(path_command);
}
