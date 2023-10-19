#ifndef __PROJECT_H
#define __PROJECT_H

#include "global.h"

class Project
{
protected:
    const char *source_name = "\"C:\\Users\\Saipa\\Desktop\\Code\\Test\\lab1\"";
    const char *target_name;
    const char *number;

public:
    Project(void);
    Project(const char *Target);
    void set_target_name(const char *Target);
    void show(void);
    void new_folder(void);
    char *path_add_double_quotation_marks(char *Path);
    char *get_target(void);
};

#endif
