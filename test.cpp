/*
Ŀ�꣺
    1��ʵ������һ���ַ����������ļ���
    2��ͨ��xcopy����ԴĿ¼���ļ����������½����ļ�����
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
