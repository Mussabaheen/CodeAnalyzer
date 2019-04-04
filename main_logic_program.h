//
//  main.cpp
//  Project_dummy
//
//  Created by Mussabaheen Malik on 12/24/17.
//  Copyright � 2017 Mussabaheen Malik. All rights reserved.
//
#include <iostream>
#include<fstream>
#include<string.h>
#include<malloc.h>
using namespace std;
class compare
{
public:
    int index_of_ifs;
    int number_of_ifs;
    char **if_conditions;
    double percentage_of_whole_code;
    double percentage_of_same_functions;
    bool any_int_variable;
    bool any_char_variable;
    bool any_float_variable;
    bool any_double_variable;
    int present_num_code;
    bool percentage_more_than_70;
    double percentage_same_code;
    double percentage;
    int leng;
    int b_double;
    int b_int;
    int b_float;
    int b_char;
    string Int,Char,Double,Float;
    bool for_int,for_char,for_double,for_float;
    char **compare_variables_int;
    char *code;
    float compare_full_variable_int;
    int compare_singlealphabet_variable_int;
    char **compare_variables_float;
    float compare_full_variable_float;
    int len;
    int compare_singlealphabet_variable_float;
    char  **compare_variables_double;
    float compare_full_variable_double;
    int compare_singlealphabet_variable_double;
    char **compare_variables_char;
    float compare_full_variable_char;
    int compare_singlealphabet_variable_char;
    char ***same_function_int ;
    char ***same_function_float;
    char ***same_function_char;
    char ***same_function_double ;
    int num_of_function_int;
    int last_variable_int;
    int  return_name_parameter_int;
    int number_of_parameters;
    bool check_int;
    int number_of_functions_in_int;
    int num_of_function_char;
    int last_variable_char;
    int  return_name_parameter_char;
    int number_of_parameters_char;
    bool check_char;
    int number_of_functions_in_char;
    int num_of_function_float;
    int last_variable_float;
    int  return_name_parameter_float;
    int number_of_parameters_float;
    bool check_float;
    int number_of_functions_in_float;
    int num_of_function_double;
    int last_variable_double;
    int  return_name_parameter_double;
    int number_of_parameters_double;
    bool check_double;
    int number_of_functions_in_double;
    bool variable_function_differ_int;
    bool variable_function_differ_char;
    bool variable_function_differ_float;
    bool variable_function_differ_double;
    int same_name_int_function_found;
    int same_full_int_function_found;
    int same_name_char_function_found;
    int same_full_char_function_found;
    int same_name_float_function_found;
    int same_full_float_function_found;
    int same_name_double_function_found;
    int same_full_double_function_found;
    float percentage_of_same_int_variables;
    float percentage_of_same_float_variables;
    float percentage_of_same_char_variables;
    float percentage_of_same_double_variables;
    float percentage_of_same_int_functions;
    float percentage_of_same_float_functions;
    float percentage_of_same_char_functions;
    float percentage_of_same_double_functions;
    float percentage_of_same_compare_code;
    float percentage_of_same_all_variables;
    compare()
    {
        index_of_ifs=0;
        number_of_ifs=0;
        if_conditions=(char**)malloc(sizeof(char *)*100);
        percentage_of_whole_code=0;
        percentage_of_same_functions=0;
        percentage_more_than_70=false;
        percentage_same_code=0;
        percentage=0;
        leng=0;
        b_double=0;
        b_int=0;
        b_float=0;
        b_char=0;
        Int="int";Char="char";Double="double";Float="float";
        for_int=false;for_char=false;for_double=false;for_float=false;
        compare_variables_int=(char **)malloc(sizeof(string)*1000);
        code=(char *)malloc(sizeof(char)*100000);
        compare_full_variable_int=0;
        compare_singlealphabet_variable_int=0;
        compare_variables_float=(char **)malloc(sizeof(string)*1000);
        compare_full_variable_float=0;
        len=0;
        compare_singlealphabet_variable_float=0;
        compare_variables_double=(char **)malloc(sizeof(string)*1000);
        compare_full_variable_double=0;
        compare_singlealphabet_variable_double=0;
        compare_variables_char=(char **)malloc(sizeof(string)*1000);
        compare_full_variable_char=0;
        compare_singlealphabet_variable_char=0;
        same_function_int = (char ***)malloc(sizeof(char**)*100);
        same_function_float = (char ***)malloc(sizeof(char**)*100);
        same_function_char = (char ***)malloc(sizeof(char**)*100);
        same_function_double = (char ***)malloc(sizeof(char**)*100);
        num_of_function_int=0;
        last_variable_int=0;
        return_name_parameter_int=0;
        number_of_parameters=0;
        check_int=false;
        number_of_functions_in_int=0;
        num_of_function_char=0;
        last_variable_char=0;
        return_name_parameter_char=0;
        number_of_parameters_char=0;
        check_char=false;
        number_of_functions_in_char=0;
        num_of_function_float=0;
        last_variable_float=0;
        return_name_parameter_float=0;
        number_of_parameters_float=0;
        check_float=false;
        number_of_functions_in_float=0;
        num_of_function_double=0;
        last_variable_double=0;
        return_name_parameter_double=0;
        number_of_parameters_double=0;
        check_double=false;
        number_of_functions_in_double=0;
        variable_function_differ_int=false;
        variable_function_differ_char=false;
        variable_function_differ_float=false;
        variable_function_differ_double=false;
        compare_full_variable_int=0;
        compare_singlealphabet_variable_int=0;
        compare_full_variable_float=0;
        compare_singlealphabet_variable_float=0;
        compare_full_variable_double=0;
        compare_singlealphabet_variable_double=0;
        compare_full_variable_char=0;
        compare_singlealphabet_variable_char=0;
        same_name_int_function_found=0;
        same_full_int_function_found=0;
        percentage_of_same_int_variables=0;
        percentage_of_same_float_variables=0;
        percentage_of_same_char_variables=0;
        percentage_of_same_double_variables=0;
        percentage_of_same_int_functions=0;
        percentage_of_same_float_functions=0;
        percentage_of_same_char_functions=0;
        percentage_of_same_double_functions=0;
        percentage_of_same_compare_code=0;
        percentage_of_same_all_variables=0;
        same_full_float_function_found=0;
        same_full_double_function_found=0;
        same_full_char_function_found=0;
        same_full_int_function_found=0;
        any_int_variable=true;
        any_char_variable=true;
        any_float_variable=true;
        any_double_variable=true;

    }
    void setdata(char *coming_code,int num_of_code)
    {
        code=coming_code;
        present_num_code=num_of_code;
    }
    void operator+(compare c2)
    {
        percentage_of_same_compare_code=0;
        percentage_same_code=0;
        percentage=0;
        cout<<code<<endl;
        cout<<c2.code<<endl;
        double smallernumberoflinecode;
        if(strlen(code)>strlen(c2.code))
        {
            smallernumberoflinecode=strlen(c2.code);
        }
        else
        {
            smallernumberoflinecode=strlen(code);
        }
        for(int a=0;a<smallernumberoflinecode;a++)
        {
            if(code[a]==c2.code[a])
            {
                percentage_same_code++;
            }

        }
        percentage=percentage_same_code/strlen(code)*100;
        if(percentage>70)
        {
            cout<<"CODE "<<present_num_code<<" is "<<percentage<<" SAME AS CODE "<<c2.present_num_code<<endl;
            percentage_more_than_70=true;
            return;
        }
        else
        {
            percentage_of_same_compare_code=percentage_same_code/strlen(code)*20;
        }
    }
    void getvariables()
    {
        any_int_variable=true;
        any_char_variable=true;
        any_double_variable=true;
        any_float_variable=true;
        for(int a=0;a<100;a++)
        {
            compare_variables_int[a]=(char *)malloc(sizeof(char)*50);
        }
        for(int a=0;a<100;a++)
        {
            compare_variables_float[a]=(char *)malloc(sizeof(char)*50);
        }
        for(int a=0;a<100;a++)
        {
            compare_variables_char[a]=(char *)malloc(sizeof(char)*50);
        }
        for(int a=0;a<100;a++)
        {
            compare_variables_double[a]=(char *)malloc(sizeof(char)*50);
        }
        for(int a=0;a<strlen(code);a++)
        {
            if('i'==code[a])
            {
                if('n'==code[a+1])
                {
                    if('t'==code[a+2])
                    {
                        a=a+3;
                        if(code[a]=='m')
                        {
                            if(code[a+1]=='a')
                            {
                                if(code[a+2]=='i')
                                {
                                    if(code[a+3]=='n')
                                    {
                                        continue;
                                    }
                                }
                            }
                        }
                        if(code[a-4]=='{' || code[a-4]=='}' || code[a-4]==';')
                            for(int b=a;;b++)
                            {
                                if(code[b]=='(')
                                {
                                    variable_function_differ_int=false;
                                    break;
                                }
                                if(code[b]==',')
                                {
                                    variable_function_differ_int=true;
                                    break;

                                }
                            }
                        if(variable_function_differ_int==true)
                            while (true) {
                                while (true) {
                                    compare_variables_int[(int)compare_full_variable_int][compare_singlealphabet_variable_int]=code[a];
                                    compare_singlealphabet_variable_int++;
                                    a++;
                                    if(code[a]==',')
                                    {
                                        compare_variables_int[(int)compare_full_variable_int][compare_singlealphabet_variable_int]='\0';
                                        compare_full_variable_int++;
                                        compare_singlealphabet_variable_int=0;
                                        a++;
                                        break;
                                    }
                                    if(code[a]==';')
                                    {
                                        compare_singlealphabet_variable_int=0;
                                        break;
                                    }
                                }
                                if(code[a]==';')
                                {
                                    compare_full_variable_int++;
                                    compare_singlealphabet_variable_int=0;
                                    break;
                                }

                            }

                    }
                }
            }

        }
        for(int a=0;a<strlen(code);a++)
        {
            if('c'==code[a])
            {
                if('h'==code[a+1])
                {
                    if('a'==code[a+2])
                    {
                        if('r'==code[a+3])
                        {
                            a=a+4;
                            if(code[a-5]=='{' || code[a-5]=='}' || code[a-5]==';')
                                for(int b=a;;b++)
                                {
                                    if(code[b]=='(')
                                    {
                                        variable_function_differ_char=false;
                                        break;
                                    }
                                    if(code[b]==',')
                                    {
                                        variable_function_differ_char=true;
                                        break;

                                    }
                                }
                            if(variable_function_differ_char==true)
                                while (true) {
                                    while (true) {
                                        compare_variables_char[(int)compare_full_variable_char][compare_singlealphabet_variable_char]=code[a];
                                        compare_singlealphabet_variable_char++;
                                        a++;
                                        if(code[a]==',')
                                        {
                                            compare_variables_char[(int)compare_full_variable_char][compare_singlealphabet_variable_char]='\0';
                                            compare_full_variable_char++;
                                            compare_singlealphabet_variable_char=0;
                                            a++;
                                            break;
                                        }
                                        if(code[a]==';')
                                        {
                                            compare_singlealphabet_variable_char=0;
                                            break;
                                        }
                                    }
                                    if(code[a]==';')
                                    {
                                        compare_full_variable_char++;
                                        compare_singlealphabet_variable_char=0;
                                        break;
                                    }

                                }
                        }
                    }
                }
            }
        }
        for(int a=0;a<strlen(code);a++)
        {
            if('d'==code[a])
            {
                if('o'==code[a+1])
                {
                    if('u'==code[a+2])
                    {
                        if('b'==code[a+3])
                        {
                            if('l'==code[a+4])
                            {
                                if('e'==code[a+5])
                                {
                                    a=a+6;
                                    if(code[a-7]=='{' || code[a-7]=='}' || code[a-7]==';')
                                        for(int b=a;;b++)
                                        {
                                            if(code[b]=='(')
                                            {
                                                variable_function_differ_double=false;
                                                break;
                                            }
                                            if(code[b]==',')
                                            {
                                                variable_function_differ_double=true;
                                                break;

                                            }
                                        }
                                    if(variable_function_differ_double==true)
                                        while (true) {
                                            while (true) {
                                                compare_variables_double[(int)compare_full_variable_double][compare_singlealphabet_variable_double]=code[a];
                                                compare_singlealphabet_variable_double++;
                                                a++;
                                                if(code[a]==',')
                                                {
                                                    compare_variables_double[(int)compare_full_variable_double][compare_singlealphabet_variable_double]='\0';
                                                    compare_full_variable_double++;
                                                    compare_singlealphabet_variable_double=0;
                                                    a++;
                                                    break;
                                                }
                                                if(code[a]==';')
                                                {
                                                    compare_singlealphabet_variable_double=0;
                                                    break;
                                                }
                                            }
                                            if(code[a]==';')
                                            {
                                                compare_full_variable_double++;
                                                compare_singlealphabet_variable_double=0;
                                                break;
                                            }

                                        }
                                }
                            }
                        }
                    }
                }
            }
        }
        for(int a=0;a<strlen(code);a++)
        {
            if('f'==code[a])
            {
                if('l'==code[a+1])
                {
                    if('o'==code[a+2])
                    {
                        if('a'==code[a+3])
                        {
                            if('t'==code[a+4])
                            {
                                a=a+5;
                                if(code[a-6]=='{' || code[a-6]=='}' || code[a-6]==';')
                                    for(int b=a;;b++)
                                    {
                                        if(code[b]=='(')
                                        {
                                            variable_function_differ_float=false;
                                            break;
                                        }
                                        if(code[b]==',')
                                        {
                                            variable_function_differ_float=true;
                                            break;

                                        }
                                    }
                                if(variable_function_differ_float==true)
                                    while (true) {
                                        while (true) {
                                            compare_variables_float[(int)compare_full_variable_float][compare_singlealphabet_variable_float]=code[a];
                                            compare_singlealphabet_variable_float++;
                                            a++;
                                            if(code[a]==',')
                                            {
                                                compare_variables_float[(int)compare_full_variable_float][compare_singlealphabet_variable_float]='\0';
                                                compare_full_variable_float++;
                                                compare_singlealphabet_variable_float=0;
                                                a++;
                                                break;
                                            }
                                            if(code[a]==';')
                                            {
                                                compare_singlealphabet_variable_float=0;
                                                break;
                                            }
                                        }
                                        if(code[a]==';')
                                        {
                                            compare_full_variable_float++;
                                            compare_singlealphabet_variable_float=0;
                                            break;
                                        }

                                    }
                            }
                        }
                    }
                }
            }
        }
    }
    void compare_int_variables(compare c2)
    {
        int num_of_int_variables_same=0;
        for(int a=0;a<compare_full_variable_int;a++)
        {
            for(int b=0;b<c2.compare_full_variable_int;b++)
            {
                for(int c=0;c<compare_variables_int[a][c]!='\0';c++)
                {
                    if(compare_variables_int[a][c]==c2.compare_variables_int[b][c])
                    {
                        if(compare_variables_int[a][c+1]=='\0')
                        {
                            num_of_int_variables_same++;
                        }
                    }
                }
            }
        }
        if(num_of_int_variables_same==0)
        {
            any_int_variable=false;
            percentage_of_same_int_variables=0;
        }
        else if(num_of_int_variables_same==c2.compare_full_variable_int && num_of_int_variables_same==compare_full_variable_int )
        {
            percentage_of_same_int_variables=10;
            //cout<<"ALL THE INT VARIABLES OF CODE"<<present_num_code<<" AND CODE"<<c2.present_num_code<<"ARE SAME !"<<endl;
        }
        else   if(num_of_int_variables_same==compare_full_variable_int)
        {
            percentage_of_same_int_variables=10;
            //cout<<"ALL THE INT VARIABLES OF CODE "<<present_num_code<<" IS SAME AS IN CODE"<<c2.present_num_code<<endl;
        }
        else if(num_of_int_variables_same==c2.compare_full_variable_int)
        {
            percentage_of_same_int_variables=10;
            //cout<<"ALL THE INT VARIABLES OF CODE "<<c2.present_num_code<<" IS SAME AS IN CODE "<<present_num_code<< "!"<<endl;
        }
        else
        {
            if(compare_full_variable_int>c2.compare_full_variable_int)
            {
                compare_full_variable_int=c2.compare_full_variable_int;
            }
            percentage_of_same_int_variables=((num_of_int_variables_same)/(compare_full_variable_int))*10;
            //cout<<"NUMBER OF INT VARIABLES SAME : "<<num_of_int_variables_same<<endl;
            //cout<<"NUMBER OF INT VARIABLES SAME : "<<percentage_of_same_all_variables<<endl;
        }
    }
    void compare_char_variables(compare c2)
    {
        int num_of_char_variables_same=0;
        for(int a=0;a<compare_full_variable_char;a++)
        {
            for(int b=0;b<c2.compare_full_variable_char;b++)
            {
                for(int c=0;c<compare_variables_char[a][c]!='\0';c++)
                {
                    if(compare_variables_char[a][c]==c2.compare_variables_char[b][c])
                    {
                        if(compare_variables_char[a][c+1]=='\0')
                        {
                            num_of_char_variables_same++;
                        }
                    }
                }
            }
        }
        if(num_of_char_variables_same==0)
        {
            any_char_variable=false;
            percentage_of_same_char_functions=0;
            //cout<<"NO char VARIABLE SAME! "<<endl;
        }
        else if(num_of_char_variables_same==c2.compare_full_variable_char && num_of_char_variables_same==compare_full_variable_char )
        {
            percentage_of_same_char_variables=10;
            //cout<<"ALL THE char VARIABLES OF CODE="<<present_num_code<<" AND CODE "<<c2.present_num_code<<"ARE SAME !"<<endl;
        }
        else   if(num_of_char_variables_same==compare_full_variable_char)
        {
            percentage_of_same_char_variables=10;
            //cout<<"ALL THE char VARIABLES OF CODE "<<present_num_code<<" IS SAME AS IN CODE "<<present_num_code<<" !"<<endl;
        }
        else
        {
            percentage_of_same_char_variables=(num_of_char_variables_same/compare_full_variable_char>(c2.compare_full_variable_char?c2.compare_full_variable_char:compare_full_variable_char))*10;
            //cout<<"NUMBER OF char VARIABLES SAME : "<<num_of_char_variables_same<<endl;
        }

    }
    void compare_float_variables(compare c2)
    {
        int num_of_float_variables_same=0;
        for(int a=0;a<compare_full_variable_float;a++)
        {
            for(int b=0;b<c2.compare_full_variable_float;b++)
            {
                for(int c=0;c<compare_variables_float[a][c]!='\0';c++)
                {
                    if(compare_variables_float[a][c]==c2.compare_variables_float[b][c])
                    {
                        if(compare_variables_float[a][c+1]=='\0')
                        {
                            num_of_float_variables_same++;
                        }
                    }
                }
            }
        }
        if(num_of_float_variables_same==0)
        {
            any_float_variable=false;
            percentage_of_same_float_variables=0;
            //cout<<"NO float VARIABLE SAME! "<<endl;
        }
        else if(num_of_float_variables_same==c2.compare_full_variable_float && num_of_float_variables_same==compare_full_variable_float )
        {
            percentage_of_same_float_variables=10;
            //cout<<"ALL THE float VARIABLES OF CODE "<<present_num_code<<" AND CODE "<<c2.present_num_code<<" ARE SAME !"<<endl;
        }
        else   if(num_of_float_variables_same==compare_full_variable_float)
        {
            percentage_of_same_float_variables=10;
            //cout<<"ALL THE float VARIABLES OF CODE "<<present_num_code<<" IS SAME AS IN CODE "<<c2.present_num_code<<" !"<<endl;
        }
        else if(num_of_float_variables_same==c2.compare_full_variable_float)
        {
            percentage_of_same_float_variables=10;
            //cout<<"ALL THE float VARIABLES OF CODE "<<c2.present_num_code<<" IS SAME AS IN CODE "<<present_num_code<<" !"<<endl;
        }
        else
        {
            percentage_of_same_float_variables=(num_of_float_variables_same/compare_full_variable_float>(c2.compare_full_variable_float?c2.compare_full_variable_float:compare_full_variable_float))*10;
            //cout<<"NUMBER OF float VARIABLES SAME : "<<num_of_float_variables_same<<endl;
        }
    }
    void compare_double_variables(compare c2)
    {
        int num_of_double_variables_same=0;
        for(int a=0;a<compare_full_variable_double;a++)
        {
            for(int b=0;b<c2.compare_full_variable_double;b++)
            {
                for(int c=0;c<compare_variables_double[a][c]!='\0';c++)
                {
                    if(compare_variables_double[a][c]==c2.compare_variables_double[b][c])
                    {
                        if(compare_variables_double[a][c+1]=='\0')
                        {
                            num_of_double_variables_same++;
                        }
                    }
                }
            }
        }
        if(num_of_double_variables_same==0)
        {
            any_double_variable=false;
            percentage_of_same_double_variables=0;
            //cout<<"NO double VARIABLE SAME! "<<endl;
        }
        else if(num_of_double_variables_same==c2.compare_full_variable_double && num_of_double_variables_same==compare_full_variable_double )
        {
            percentage_of_same_double_variables=10;
            //cout<<"ALL THE double VARIABLES OF CODE "<<present_num_code<<" AND CODE "<<c2.present_num_code<<" ARE SAME !"<<endl;
        }
        else   if(num_of_double_variables_same==compare_full_variable_double)
        {
            percentage_of_same_double_variables=10;
            //cout<<"ALL THE double VARIABLES OF CODE "<<present_num_code<<" IS SAME AS IN CODE "<<c2.present_num_code<<" !"<<endl;
        }
        else if(num_of_double_variables_same==c2.compare_full_variable_double)
        {
            percentage_of_same_double_variables=10;
            //cout<<"ALL THE double VARIABLES OF CODE "<<c2.present_num_code<<" IS SAME AS IN CODE "<<present_num_code<<" !"<<endl;
        }
        else
        {
            percentage_of_same_double_variables=(num_of_double_variables_same/compare_full_variable_double>(c2.compare_full_variable_double?c2.compare_full_variable_double:compare_full_variable_double))*10;
            //cout<<"NUMBER OF double VARIABLES SAME : "<<num_of_double_variables_same<<endl;
        }
    }
    void all_same_variables()
    {
        //cout<<any_int_variable<<endl<<any_float_variable<<endl<<any_double_variable<<endl<<any_char_variable<<endl;
        if((any_int_variable==true) && (any_float_variable==false ) && (any_double_variable==false) &&
           (any_char_variable==false))
           {
               percentage_of_same_int_variables*=4;
           }
        if((any_int_variable==true) && (any_float_variable==true ) && (any_double_variable==false) &&
           (any_char_variable==false))
        {
            percentage_of_same_int_variables*=2;
            percentage_of_same_float_variables*=2;
        }
        if((any_int_variable==true) && (any_float_variable==false ) && (any_double_variable==true) &&
           (any_char_variable==false))
        {
            percentage_of_same_int_variables*=2;
            percentage_of_same_double_variables*=2;
        }
        if((any_int_variable==true) && (any_float_variable==true ) && (any_double_variable==true) &&
           (any_char_variable==false))
        {
            percentage_of_same_int_variables*=1.33;
            percentage_of_same_float_variables*=1.33;
            percentage_of_same_double_variables*=1.33;
        }
        if((any_int_variable==true) && (any_float_variable==true ) && (any_double_variable==false) &&
           (any_char_variable==true))
        {
            percentage_of_same_int_variables*=1.33;
            percentage_of_same_float_variables*=1.33;
            percentage_of_same_char_variables*=1.33;
        }
        if((any_int_variable==true) && (any_float_variable==true ) && (any_double_variable==true) &&
           (any_char_variable==true))
        {
            percentage_of_same_int_variables*=1;
            percentage_of_same_float_variables*=1;
            percentage_of_same_double_variables*=1;
            percentage_of_same_char_variables*=1;
        }
        if((any_int_variable==false) && (any_float_variable==true ) && (any_double_variable==false) &&
           (any_char_variable==false))
        {
            percentage_of_same_float_variables*=4;
        }
        if((any_int_variable==false) && (any_float_variable==true ) && (any_double_variable==true) &&
           (any_char_variable==false))
        {
            percentage_of_same_int_variables*=2;
            percentage_of_same_double_variables*=2;
        }
        if((any_int_variable==false) && (any_float_variable==true ) && (any_double_variable==true) &&
           (any_char_variable==true))
        {
            percentage_of_same_char_variables*=1.33;
            percentage_of_same_float_variables*=1.33;
            percentage_of_same_double_variables*=1.33;
        }
        if((any_int_variable==false) && (any_float_variable==false ) && (any_double_variable==true) &&
           (any_char_variable==false))
        {
            //cout<<"HERE 7! "<<endl;
            percentage_of_same_double_variables*=4;
        }
        if((any_int_variable==false) && (any_float_variable==false ) && (any_double_variable==true) &&
           (any_char_variable==true))
        {
            //cout<<"HERE 8! "<<endl;
            percentage_of_same_char_variables*=2;
            percentage_of_same_double_variables*=2;
        }
        if((any_int_variable==true) && (any_float_variable==false ) && (any_double_variable==false) &&
           (any_char_variable==true))
        {
            percentage_of_same_char_variables*=2;
            percentage_of_same_int_variables*=2;
        }
        percentage_of_same_all_variables=percentage_of_same_int_variables+percentage_of_same_char_variables+percentage_of_same_float_variables+percentage_of_same_double_variables;
        //cout<<"PERCENTAGE OF SAME VARIABLES : "<<percentage_of_same_all_variables<<endl;
    }
    void getting_same_functions_int()
    {
        num_of_function_int=0;
        last_variable_int=0;
        return_name_parameter_int=0;
        number_of_parameters=0;
        check_int=false;
        for(int u=0;u<40;u++)
        {
            same_function_int[u]=(char **)malloc(sizeof(char*)*100);
        }
        for(int u=0;u<30;u++)
        {
            for(int t=0;t<20;t++)
            {
                same_function_int[u][t]=(char *)malloc(sizeof(char)*100);
            }
        }
        for(int u=0;u<40;u++)
        {
            same_function_char[u]=(char **)malloc(sizeof(char*)*100);
        }
        for(int u=0;u<30;u++)
        {
            for(int t=0;t<20;t++)
            {
                same_function_char[u][t]=(char *)malloc(sizeof(char)*100);
            }
        }
        for(int u=0;u<40;u++)
        {
            same_function_double[u]=(char **)malloc(sizeof(char*)*100);
        }
        for(int u=0;u<30;u++)
        {
            for(int t=0;t<20;t++)
            {
                same_function_double[u][t]=(char *)malloc(sizeof(char)*100);
            }
        }
        for(int u=0;u<40;u++)
        {
            same_function_float[u]=(char **)malloc(sizeof(char*)*100);
        }
        for(int u=0;u<30;u++)
        {
            for(int t=0;t<20;t++)
            {
                same_function_float[u][t]=(char *)malloc(sizeof(char)*100);
            }
        }
        for(int a=0;a<strlen(code);a++)
        {
            if(code[a-1]==';' || code[a-1]=='}')
            {
                if(code[a]=='i')
                {
                    if(code[a+1]=='n')
                    {
                        if(code[a+2]=='t')
                        {
                            if(code[a+3]!='m')
                            {
                                if(code[a+4]!='a')
                                {
                                    if(code[a+5]!='i')
                                    {
                                        if(code[a+6]!='n')
                                        {
                                            if(code[a+7]!='(')
                                            {
                                                for(int b=a+3;;b++)
                                                {
                                                    if(code[b]==',')
                                                    {
                                                        check_int=false;
                                                        break;
                                                    }
                                                    if(code[b]=='(')
                                                    {
                                                        a=a+3;
                                                        check_int=true;
                                                        break;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                    }
                }
                if(check_int==true)
                {
                    if(return_name_parameter_int==0)
                    {
                        same_function_int[num_of_function_int][return_name_parameter_int][0]='i';
                        same_function_int[num_of_function_int][return_name_parameter_int][1]='n';
                        same_function_int[num_of_function_int][return_name_parameter_int][2]='t';
                        return_name_parameter_int++;
                    }
                    if(return_name_parameter_int==1)
                    {
                        same_function_int[num_of_function_int][return_name_parameter_int][last_variable_int]=code[a];
                        last_variable_int++;
                        for(int b=a+1;code[b]!='(';b++)
                        {
                            same_function_int[num_of_function_int][return_name_parameter_int][last_variable_int]=code[b];
                            last_variable_int++;
                        }
                        return_name_parameter_int++;
                    }
                    if(return_name_parameter_int==2)
                    {

                        number_of_parameters=1;
                        for(int b=a;code[b]!=')';b++)
                        {
                            if(code[b]=='(' && code[b+1]==')')
                            {
                                number_of_parameters=0;
                                same_function_int[num_of_function_int][return_name_parameter_int][0]=(char)number_of_parameters;
                                break;
                            }
                            if(code[b]==',')
                            {
                                number_of_parameters++;
                            }
                        }
                        same_function_int[num_of_function_int][return_name_parameter_int][0]=(char)number_of_parameters;

                    }

                }
                if(check_int==true)
                {
                    number_of_functions_in_int++;
                    num_of_function_int++;
                    return_name_parameter_int=0;
                    last_variable_int=0;
                    number_of_parameters=0;
                    check_int=false;
                }


            }
        }
        for(int a=0;a<strlen(code);a++)
        {
            if(code[a-1]==';' || code[a-1]=='}')
            {

                if(code[a]=='c')
                {
                    if(code[a+1]=='h')
                    {
                        if(code[a+2]=='a')
                        {
                            if(code[a+3]=='r')
                            {
                                for(int b=a+4;;b++)
                                {
                                    if(code[b]==',')
                                    {

                                        check_char=false;
                                        break;
                                    }
                                    if(code[b]=='(')
                                    {
                                        a=a+4;
                                        check_char=true;
                                        break;
                                    }
                                }
                            }
                        }

                    }
                }
                if(check_char==true)
                {
                    if(return_name_parameter_char==0)
                    {
                        same_function_char[num_of_function_char][return_name_parameter_char][0]='c';
                        same_function_char[num_of_function_char][return_name_parameter_char][1]='h';
                        same_function_char[num_of_function_char][return_name_parameter_char][2]='a';
                        same_function_char[num_of_function_char][return_name_parameter_char][3]='r';
                        return_name_parameter_char++;
                    }
                    if(return_name_parameter_char==1)
                    {
                        same_function_char[num_of_function_char][return_name_parameter_char][last_variable_char]=code[a];
                        last_variable_char++;
                        for(int b=a+1;code[b]!='(';b++)
                        {
                            same_function_char[num_of_function_char][return_name_parameter_char][last_variable_char]=code[b];
                            last_variable_char++;
                        }
                        return_name_parameter_char++;

                    }
                    if(return_name_parameter_char==2)
                    {
                        number_of_parameters_char=1;
                        for(int b=a;code[b]!=')';b++)
                        {
                            if(code[b]=='(' && code[b+1]==')')
                            {

                                number_of_parameters_char=0;
                                same_function_char[num_of_function_char][return_name_parameter_char][0]=(char)number_of_parameters_char;
                                break;
                            }
                            if(code[b]==',')
                            {
                                number_of_parameters_char++;
                            }
                        }
                        same_function_char[num_of_function_char][return_name_parameter_char][0]=(char)number_of_parameters_char;
                    }

                }
                if(check_char==true)
                {
                    number_of_functions_in_char++;
                    num_of_function_char++;
                    return_name_parameter_char=0;
                    last_variable_char=0;
                    number_of_parameters_char=0;
                    check_char=false;
                }
            }
        }
        for(int a=0;a<strlen(code);a++)
        {
            if(code[a-1]==';' || code[a-1]=='}')
            {

                if(code[a]=='f')
                {
                    if(code[a+1]=='l')
                    {
                        if(code[a+2]=='o')
                        {
                            if(code[a+3]=='a')
                            {
                                if(code[a+4]=='t')
                                {
                                    for(int b=a+55;;b++)
                                    {
                                        if(code[b]==',')
                                        {

                                            check_float=false;
                                            break;
                                        }
                                        if(code[b]=='(')
                                        {
                                            a=a+5;
                                            check_float=true;
                                            break;
                                        }
                                    }
                                }
                            }

                        }
                    }
                }
                if(check_float==true)
                {
                    if(return_name_parameter_float==0)
                    {
                        same_function_float[num_of_function_float][return_name_parameter_float][0]='f';
                        same_function_float[num_of_function_float][return_name_parameter_float][1]='l';
                        same_function_float[num_of_function_float][return_name_parameter_float][2]='o';
                        same_function_float[num_of_function_float][return_name_parameter_float][3]='a';
                        same_function_float[num_of_function_float][return_name_parameter_float][4]='t';
                        return_name_parameter_float++;
                    }
                    if(return_name_parameter_float==1)
                    {
                        same_function_float[num_of_function_float][return_name_parameter_float][last_variable_float]=code[a];
                        last_variable_float++;
                        for(int b=a+1;code[b]!='(';b++)
                        {
                            same_function_float[num_of_function_float][return_name_parameter_float][last_variable_float]=code[b];
                            last_variable_float++;
                        }
                        return_name_parameter_float++;

                    }
                    if(return_name_parameter_float==2)
                    {
                        number_of_parameters_float=1;
                        for(int b=a;code[b]!=')';b++)
                        {
                            if(code[b]=='(' && code[b+1]==')')
                            {

                                number_of_parameters_float=0;
                                same_function_float[num_of_function_float][return_name_parameter_float][0]=(float)number_of_parameters_float;
                                break;
                            }
                            if(code[b]==',')
                            {
                                number_of_parameters_float++;
                            }
                        }
                        same_function_float[num_of_function_float][return_name_parameter_float][0]=(float)number_of_parameters_float;
                    }

                }
                if(check_float==true)
                {
                    number_of_functions_in_float++;
                    num_of_function_float++;
                    return_name_parameter_float=0;
                    last_variable_float=0;
                    number_of_parameters_float=0;
                    check_float=false;
                }
            }
        }
        for(int a=0;a<strlen(code);a++)
        {
            if(code[a-1]==';' || code[a-1]=='}')
            {

                if(code[a]=='d')
                {
                    if(code[a+1]=='o')
                    {
                        if(code[a+2]=='u')
                        {
                            if(code[a+3]=='b')
                            {
                                if(code[a+4]=='l')
                                {
                                    if(code[a+5]=='e')
                                    {
                                        for(int b=a+6;;b++)
                                        {
                                            if(code[b]==',')
                                            {

                                                check_double=false;
                                                break;
                                            }
                                            if(code[b]=='(')
                                            {
                                                a=a+6;
                                                check_double=true;
                                                break;
                                            }
                                        }
                                    }
                                }

                            }
                        }
                    }

                }
                if(check_double==true)
                {
                    if(return_name_parameter_double==0)
                    {
                        same_function_double[num_of_function_double][return_name_parameter_double][0]='d';
                        same_function_double[num_of_function_double][return_name_parameter_double][1]='o';
                        same_function_double[num_of_function_double][return_name_parameter_double][2]='u';
                        same_function_double[num_of_function_double][return_name_parameter_double][3]='b';
                        same_function_double[num_of_function_double][return_name_parameter_double][4]='l';
                        same_function_double[num_of_function_double][return_name_parameter_double][5]='e';
                        return_name_parameter_double++;
                    }
                    if(return_name_parameter_double==1)
                    {
                        same_function_double[num_of_function_double][return_name_parameter_double][last_variable_double]=code[a];
                        last_variable_double++;
                        for(int b=a+1;code[b]!='(';b++)
                        {
                            same_function_double[num_of_function_double][return_name_parameter_double][last_variable_double]=code[b];
                            last_variable_double++;
                        }
                        return_name_parameter_double++;

                    }
                    if(return_name_parameter_double==2)
                    {
                        number_of_parameters_double=1;
                        for(int b=a;code[b]!=')';b++)
                        {
                            if(code[b]=='(' && code[b+1]==')')
                            {
                                number_of_parameters_double=0;
                                same_function_double[num_of_function_double][return_name_parameter_double][0]=(double)number_of_parameters_double;
                                break;
                            }
                            if(code[b]==',')
                            {
                                number_of_parameters_double++;
                            }
                        }
                        same_function_double[num_of_function_double][return_name_parameter_double][0]=(double)number_of_parameters_double;
                    }

                }
                if(check_double==true)
                {
                    number_of_functions_in_double++;
                    num_of_function_double++;
                    return_name_parameter_double=0;
                    last_variable_double=0;
                    number_of_parameters_double=0;
                    check_double=false;
                }
            }
        }

    }
    void show_int_functions ()
    {
        for(int a=0;a<number_of_functions_in_int;a++)
        {
            for(int b=0;b<3;b++)
            {
                for(int c=0;same_function_int[a][b][c]!='\0';c++)
                {
                    if(b==2)
                    {
                        //cout<<(int)same_function_int[a][b][c];
                    }
                    else
                    {
                        //cout<<same_function_int[a][b][c];
                    }
                }
                if((int)same_function_int[0][2][0]==0 && b==2)
                {
                    //cout<<(int)same_function_int[a][b][0];
                }
                //cout<<endl;
            }
        }

    }
    void show_char_functions ()
    {
        for(int a=0;a<number_of_functions_in_char;a++)
        {
            for(int b=0;b<3;b++)
            {
                for(int c=0;same_function_char[a][b][c]!='\0';c++)
                {
                    if(b==2)
                    {
                        //cout<<(int)same_function_char[a][b][c];
                    }
                    else
                    {
                        //cout<<same_function_char[a][b][c];
                    }
                }
                if((int)same_function_char[0][2][0]==0 && b==2)
                {
                    //cout<<(int)same_function_char[a][b][0];
                }
                //cout<<endl;
            }
        }
    }
    void show_double_functions ()
    {
        for(int a=0;a<number_of_functions_in_double;a++)
        {
            for(int b=0;b<3;b++)
            {
                for(int c=0;same_function_double[a][b][c]!='\0';c++)
                {
                    if(b==2)
                    {
                        //cout<<(int)same_function_double[a][b][c];
                    }
                    else
                    {
                        //cout<<same_function_double[a][b][c];
                    }
                }
                if((int)same_function_double[0][2][0]==0 && b==2)
                {
                    //cout<<(int)same_function_double[a][b][0];
                }
                //cout<<endl;
            }
        }
    }
    void show_float_functions ()
    {
        for(int a=0;a<number_of_functions_in_float;a++)
        {
            for(int b=0;b<3;b++)
            {
                for(int c=0;same_function_float[a][b][c]!='\0';c++)
                {
                    if(b==2)
                    {
                        //cout<<(int)same_function_float[a][b][c];
                    }
                    else
                    {
                        //cout<<same_function_float[a][b][c];
                    }
                }
                if((int)same_function_float[0][2][0]==0 && b==2)
                {
                    //cout<<(int)same_function_float[a][b][0];
                }
                //cout<<endl;
            }
        }
    }
    void Compare_int_functions(compare c1)
    {

        for(int a=0;a<number_of_functions_in_int;a++)
        {
            for(int b=1;b<3;b++)
            {
                for(int c=0;same_function_int[a][b][c]!='\0';c++)
                {
                    for(int d=0;d<c1.number_of_functions_in_int;d++)
                    {

                        if(same_function_int[a][b][c]==c1.same_function_int[d][b][c] || (int)same_function_int[a][b][c]==(int)c1.same_function_int[d][b][c])
                        {
                            if(b==2 && same_function_int[a][b][c+1]=='\0' && c1.same_function_int[d][b][c+1]=='\0')
                            {
                                same_name_int_function_found--;
                                same_full_int_function_found++;
                            }
                            if(same_function_int[a][b][c+1]=='\0' && c1.same_function_int[d][b][c+1]=='\0')
                            {
                                same_name_int_function_found++;
                            }
                        }
                    }

                }
            }
        }
        if(number_of_functions_in_int!=0)
        {
        if(number_of_functions_in_int==same_full_int_function_found)
        {
            percentage_of_same_int_functions=10;
        }
        else
        {
            percentage_of_same_int_functions=(same_full_int_function_found/number_of_functions_in_int)*10;
        }
        //cout<<"Number of int functions same : "<<same_full_int_function_found<<endl;
        //cout<<"Number of int functions with same names : "<<same_name_int_function_found<<endl;
        //cout<<"PERCENTAGE OF SAME int  : "<<percentage_of_same_int_functions<<endl;
    }
    }
    void Compare_char_functions(compare c1)
    {

        for(int a=0;a<number_of_functions_in_char;a++)
        {
            for(int b=1;b<3;b++)
            {
                for(int c=0;same_function_char[a][b][c]!='\0';c++)
                {
                    for(int d=0;d<c1.number_of_functions_in_char;d++)
                    {

                        if(same_function_char[a][b][c]==c1.same_function_char[d][b][c] || (int)same_function_char[a][b][c]==(int)c1.same_function_char[d][b][c])
                        {
                            if(b==2 && same_function_char[a][b][c+1]=='\0' && c1.same_function_char[d][b][c+1]=='\0')
                            {
                                same_name_char_function_found--;
                                same_full_char_function_found++;
                            }
                            if(same_function_char[a][b][c+1]=='\0' && c1.same_function_char[d][b][c+1]=='\0')
                            {
                                same_name_char_function_found++;
                            }
                        }
                    }

                }
            }
        }
        if(number_of_functions_in_char!=0)
        {
        if(number_of_functions_in_char==same_full_char_function_found)
        {
            percentage_of_same_char_functions=10;
        }
        else
        {
            percentage_of_same_char_functions=(same_full_char_function_found/number_of_functions_in_char)*10;
        }
        //cout<<"Number of char functions same : "<<same_full_char_function_found<<endl;
        //cout<<"Number of char functions with same names : "<<same_name_char_function_found<<endl;
        //cout<<"PERCENTAGE OF SAME char  : "<<percentage_of_same_char_functions<<endl;
    }
    }
    void Compare_float_functions(compare c1)
    {

        for(int a=0;a<number_of_functions_in_float;a++)
        {
            for(int b=1;b<3;b++)
            {
                for(int c=0;same_function_float[a][b][c]!='\0';c++)
                {
                    for(int d=0;d<c1.number_of_functions_in_float;d++)
                    {

                        if(same_function_float[a][b][c]==c1.same_function_float[d][b][c] || (int)same_function_float[a][b][c]==(int)c1.same_function_float[d][b][c])
                        {
                            if(b==2 && same_function_float[a][b][c+1]=='\0' && c1.same_function_float[d][b][c+1]=='\0')
                            {
                                same_name_float_function_found--;
                                same_full_float_function_found++;
                            }
                            if(same_function_float[a][b][c+1]=='\0' && c1.same_function_float[d][b][c+1]=='\0')
                            {
                                same_name_float_function_found++;
                            }
                        }
                    }

                }
            }
        }
        if(number_of_functions_in_float!=0)
        {
        if(number_of_functions_in_float==same_full_float_function_found)
        {
            percentage_of_same_float_functions=10;
        }
        else
        {
            percentage_of_same_float_functions=(same_full_float_function_found/number_of_functions_in_float)*10;
        }
        //cout<<"Number of float functions same : "<<same_full_float_function_found<<endl;
        //cout<<"Number of float functions with same names : "<<same_name_float_function_found<<endl;
        //cout<<"PERCENTAGE OF SAME float  : "<<percentage_of_same_float_functions<<endl;
    }
    }
    void Compare_double_functions(compare c1)
    {

        for(int a=0;a<number_of_functions_in_double;a++)
        {
            for(int b=1;b<3;b++)
            {
                for(int c=0;same_function_double[a][b][c]!='\0';c++)
                {
                    for(int d=0;d<c1.number_of_functions_in_double;d++)
                    {

                        if(same_function_double[a][b][c]==c1.same_function_double[d][b][c] || (int)same_function_double[a][b][c]==(int)c1.same_function_double[d][b][c])
                        {
                            if(b==2 && same_function_double[a][b][c+1]=='\0' && c1.same_function_double[d][b][c+1]=='\0')
                            {
                                same_name_double_function_found--;
                                same_full_double_function_found++;
                            }
                            if(same_function_double[a][b][c+1]=='\0' && c1.same_function_double[d][b][c+1]=='\0')
                            {
                                same_name_double_function_found++;
                            }
                        }
                    }

                }
            }
        }
        if(percentage_of_same_double_functions<20)
        if(number_of_functions_in_double!=0)
        {
        if(number_of_functions_in_double==same_full_double_function_found)
        {
            percentage_of_same_double_functions=10;
        }
        else
        {
            //cout<<"HOW : "<<same_full_double_function_found<<" "<<number_of_functions_in_double<<endl;
            percentage_of_same_double_functions=(same_full_double_function_found/number_of_functions_in_double)*10;
        }
        //cout<<"Number of double functions same : "<<same_full_double_function_found<<endl;
        //cout<<"Number of double functions with same names : "<<same_name_double_function_found<<endl;
        //cout<<"PERCENTAGE OF SAME DOUBLE  : "<<percentage_of_same_double_functions<<endl;
    }
    }
    void get_all_functions()
    {
        //cout<<number_of_functions_in_int<<endl<<number_of_functions_in_char<<endl<<number_of_functions_in_double<<endl<<number_of_functions_in_float<<endl;
        if(number_of_functions_in_int==1 && number_of_functions_in_char==0 && number_of_functions_in_double==0 && number_of_functions_in_float==0)
        {
            percentage_of_same_int_functions*=4;
        }
        if(number_of_functions_in_int==1 && number_of_functions_in_char==1 && number_of_functions_in_double==0 && number_of_functions_in_float==0)
        {
            percentage_of_same_int_functions*=2;
            percentage_of_same_char_functions*=2;
        }
        if(number_of_functions_in_int==1 && number_of_functions_in_char==1 && number_of_functions_in_double==1 && number_of_functions_in_float==0)
        {
            percentage_of_same_int_functions*=1.33;
            percentage_of_same_char_functions*=1.33;
            percentage_of_same_double_functions*=1.33;

        }
        if(number_of_functions_in_int==1 && number_of_functions_in_char==1 && number_of_functions_in_double==1 && number_of_functions_in_float==1)
        {
            percentage_of_same_int_functions*=1;
            percentage_of_same_char_functions*=1;
            percentage_of_same_double_functions*=1;
            percentage_of_same_float_functions*=1;

        }
        if(number_of_functions_in_int==0 && number_of_functions_in_char==1 && number_of_functions_in_double==0 && number_of_functions_in_float==0)
        {
            percentage_of_same_char_functions*=4;
        }
        if(number_of_functions_in_int==0 && number_of_functions_in_char==1 && number_of_functions_in_double==1 && number_of_functions_in_float==0)
        {
            percentage_of_same_double_functions*=2;
            percentage_of_same_char_functions*=2;
        }
        if(number_of_functions_in_int==0 && number_of_functions_in_char==1 && number_of_functions_in_double==1 && number_of_functions_in_float==1)
        {
            percentage_of_same_float_functions*=1.33;
            percentage_of_same_char_functions*=1.33;
            percentage_of_same_double_functions*=1.33;

        }
        if(number_of_functions_in_int==0 && number_of_functions_in_char==0 && number_of_functions_in_double==1 && number_of_functions_in_float==0)
        {
            percentage_of_same_double_functions*=4;
        }
        if(number_of_functions_in_int==0 && number_of_functions_in_char==0 && number_of_functions_in_double==1 && number_of_functions_in_float==1)
        {
            percentage_of_same_double_functions*=2;
            percentage_of_same_float_functions*=2;
        }
        if(number_of_functions_in_int==0 && number_of_functions_in_char==0 && number_of_functions_in_double==0 && number_of_functions_in_float==1)
        {
            percentage_of_same_float_functions*=4;
        }
        if(number_of_functions_in_int==1 && number_of_functions_in_char==0 && number_of_functions_in_double==1 && number_of_functions_in_float==0)
        {
            percentage_of_same_int_functions*=2;
            percentage_of_same_double_functions*=2;
        }
        percentage_of_same_functions=percentage_of_same_int_variables+percentage_of_same_double_functions+percentage_of_same_double_functions+percentage_of_same_char_functions;
        //cout<<"PERCENTAGE OF SAME FUNCTIONS : "<<percentage_of_same_functions<<endl;
    }
    void get_whole_percentage()
    {
        if(number_of_functions_in_int==0 && number_of_functions_in_char==0 && number_of_functions_in_double==0 && number_of_functions_in_float==0)
        {
            percentage_of_same_functions=0;
            percentage_of_same_all_variables*=2;
        }
        percentage_of_whole_code=percentage_of_same_functions+percentage_of_same_all_variables+percentage_of_same_compare_code;
        cout<<"PERCENTAGE OF CODE "<<present_num_code<<" SAME AS CODE "<<(present_num_code+1)<<" : "<<percentage_of_whole_code<<endl;
        return;
    }
    void getting_if_conditions()
    {
        number_of_ifs=0;
        for(int a=0;a<100;a++)
        {
            if_conditions[a]=(char *)malloc(sizeof(char)*150);
        }
        for(int a=0;a<strlen(code);a++)
        {
            if(code[a]=='i' && code[a+1]=='f' && code[a+2]=='(')
            {
                index_of_ifs=0;
                for(int b=a+3;;b++)
                {
                    if((code[b]==(char)41) && (code[b+1]==(char)123))
                    {
                        break;
                    }
                if_conditions[number_of_ifs][index_of_ifs]=code[b];
                index_of_ifs++;
                }
                number_of_ifs++;
            }
        }
    }
    void getting_compare_if_statements(compare c1)
    {
        int number_of_if_statements_same=0;
        for(int a=0;a<number_of_ifs;a++)
        {
            for(int b=0;b<c1.number_of_ifs;b++)
            {
                for(int c=0;if_conditions[a][c]!='\0' || c1.if_conditions[b][c]!='\0';
                   c++)
                {

                    if(if_conditions[a][c]==c1.if_conditions[b][c] && if_conditions[a][c+1]=='\0' && c1.if_conditions[b][c+1]=='\0')
                    {
                        number_of_if_statements_same++;
                    }
                    if(if_conditions[a][c]!=c1.if_conditions[b][c])
                    {
                        break;
                    }

                }
            }

        }
        cout<<"NUMBER OF IF STATEMENT SAME : "<<number_of_if_statements_same<<endl;
    }

};
void  main_program_run(string *files,int number_of_c) {
    int num_of_code=number_of_c;
    int *reducer_code=(int *)malloc(sizeof(int )*1000);
    int *reducer_code1=(int *)malloc(sizeof(int )*1000);
    char **code1=(char **)malloc(sizeof(char*)*num_of_code);
    char **code1_withoutspace=(char **)malloc(sizeof(char*)*(num_of_code));
    compare c1[num_of_code];
    for(int a=0;a<num_of_code;a++)
    {
        code1[a]=(char *)malloc(sizeof(char)*100000);
    }
    for(int a=0;a<num_of_code;a++)
    {
        code1_withoutspace[a]=(char *)malloc(sizeof(char)*strlen(code1[a]));
    }
    reducer_code[0]=0;
    reducer_code1[0]=0;

    /*string checker;
    cout<<"Do you want to take input from files or manually(yes=files/no=manually) : ";
    cin>>checker;
    if(checker=="no")
    {
        for(int tr=0;tr<num_of_code;tr++)
        {
            cout<<"Enter Code "<<(tr+1)<<" : ";
            for(int a=0;a<9999;a++)
            {
                cin>>code1[tr][a];
                if(96==(int)code1[tr][a])
                {
                    code1[tr][a]='\0';
                    break;
                }
                if(27==(int)code1[tr][a])
                {
                    code1[tr][a]='\0';
                    break;
                }
            }
        }
    }
    else
    {
    */
        for(int a=0;a<num_of_code;a++)
        {
            ifstream checker;
            const char *filename_new=new char [300];
            filename_new=files[a].c_str();
            checker.open(filename_new);
            for(int b=0;b<99999;b++)
            {
                checker>>code1[a][b];
            }
            checker.close();
        }
    //}
    for(int a=0;a<num_of_code;a++)
    {
        c1[a].setdata(code1[a],a+1);
        delete[] code1[a];
        delete[] code1_withoutspace[a];
        c1[a].getting_if_conditions();
        c1[a].getting_same_functions_int();
        c1[a].show_int_functions();
        c1[a].show_char_functions();
        c1[a].show_double_functions();
        c1[a].show_float_functions();
        c1[a].getvariables();
    }
    delete code1;
    delete code1_withoutspace;
    for(int a=0;a<num_of_code;a++)
    {
        for(int b=a+1;b<num_of_code;b++)
        {
            if(b<(num_of_code))
            {
                c1[a]+c1[b];
               if(c1[a].percentage<70)
                {
                    c1[a].getting_compare_if_statements(c1[b]);
                    c1[a].compare_int_variables(c1[b]);
                    c1[a].compare_float_variables(c1[b]);
                    c1[a].compare_char_variables(c1[b]);
                    c1[a].compare_double_variables(c1[b]);
                    c1[a].Compare_int_functions(c1[b]);
                    c1[a].Compare_char_functions(c1[b]);
                    c1[a].Compare_float_functions(c1[b]);
                    c1[a].Compare_double_functions(c1[b]);
                    c1[a].all_same_variables();
                    c1[a].get_all_functions();
                    c1[a].get_whole_percentage();
                }
            }
        }
    }
}

