#include <iostream>
#include<fstream>
#include<windows.h>
#include<string.h>
#include<string>
#include<sstream>
#define MAX_PATH 10000
using namespace std;
char filename[ MAX_PATH ];
int get_file_name();
char **file_names;
string filesforyou[10000];
char **full_file;
char **percent=new char*[500];
char **final_results;
bool reset=false;
//logical part 50
#define if_statement_weight 20.0
#define for_statement_weight 15.0
#define while_do_while_statement_weight 15.0
//functions 20
#define int_function_weight 5.0
#define float_function_weight 5.0
#define char_function_weight 5.0
#define double_function_weight 5.0
//variables 20
#define int_variable_weight 5.0
#define char_variable_weight 5.0
#define double_variable_weight 5.0
#define float_variable_weight 5.0
//charcter by character 10
#define character_by_charcter_weight 10.0
int file_taker= 0;
class compare
{
public:
    int num_of_double_variables_same=0;
    int num_of_int_variables_same;
    bool any_for_loop;
    bool any_if_statement;
    float percentage_of_ifs_statement;
    int number_of_if_statements_same;
    bool any_while_loop;
    float percentage_of_while;
    float percentage_of_for_loops;
    int index_of_while;
    int number_of_while_loops;
    int number_of_for_same;
    int index_of_for;
    char **while_loops;
    int number_of_for_loops;
    char **for_loops;
    int index_of_ifs;
    int number_of_ifs;
    char **if_conditions;
    int percentage_of_whole_code;
    double percentage_of_same_functions;
    bool any_int_variable;
    bool any_char_variable;
    bool any_float_variable;
    bool any_double_variable;
    int present_num_code;
    bool percentage_more_than_70;
    double percentage_same_code;
    int percentage;
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

    	//cout<<"Constructor called 0"<<endl;
    	for(int a=0;a<500;a++)
    	{
    	    percent[a]=new char [1000];
    	}
        num_of_double_variables_same=0;
        num_of_int_variables_same=0;
        any_for_loop=true;
        any_if_statement=true;
        percentage_of_ifs_statement=0;
        number_of_if_statements_same=0;
        any_while_loop=true;
        percentage_of_while=0.0;
        percentage_of_for_loops=0;
        index_of_while=0;
        number_of_for_same=0;
        index_of_for=0;
        while_loops=new char* [50];
        for_loops=new  char* [50];
        index_of_ifs=0;
        number_of_ifs=0;
        if_conditions=new char* [50];
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
        compare_variables_int=new char* [100];
        code=new char [1000000];
        compare_full_variable_int=0;
        compare_singlealphabet_variable_int=0;
        compare_variables_float=new char* [100];
        compare_full_variable_float=0;
        len=0;
        compare_singlealphabet_variable_float=0;
        compare_variables_double=new char* [100];
        compare_full_variable_double=0;
        compare_singlealphabet_variable_double=0;
        compare_variables_char=new char* [100];
        compare_full_variable_char=0;
        compare_singlealphabet_variable_char=0;
        same_function_int = new char** [30];
        same_function_float = new char** [30];
        same_function_char = new char** [30];
        same_function_double = new char** [30];
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

        for(int a=0;a<50;a++)
        {
            for_loops[a]=new char [150];
        }
        //cout<<"ALLOCATION 1 "<<endl;
        for(int a=0;a<50;a++)
        {
            if_conditions[a]=new char[150];
        }
        //cout<<"ALLOCATION 2 "<<endl;
         for(int a=0;a<100;a++)
        {
            compare_variables_int[a]=new char [50];
        }
       // cout<<"ALLOCATION 3 "<<endl;
        for(int a=0;a<100;a++)
        {
            compare_variables_float[a]=new char [50];
        }
        //cout<<"ALLOCATION 4 "<<endl;
        for(int a=0;a<100;a++)
        {
            compare_variables_char[a]=new char [50];
        }
        //cout<<"ALLOCATION 5 "<<endl;
        for(int a=0;a<100;a++)
        {
            compare_variables_double[a]=new char [50];
        }
        //cout<<"ALLOCATION 6 "<<endl;
        for(int a=0;a<50;a++)
        {
            while_loops[a]=new char[100];
        }
        //cout<<"ALLOCATION 7 "<<endl;
         for(int u=0;u<30;u++)
        {
            same_function_int[u]=new char* [20];
        }
        //cout<<"ALLOCATION 8 "<<endl;
        for(int u=0;u<30;u++)
        {
            for(int t=0;t<20;t++)
            {
                same_function_int[u][t]=new char [100];
            }
        }
        //cout<<"ALLOCATION 9 "<<endl;
        for(int u=0;u<30;u++)
        {
            same_function_char[u]=new char* [20];
        }
        //cout<<"ALLOCATION 10 "<<endl;
        for(int u=0;u<30;u++)
        {
            for(int t=0;t<20;t++)
            {
                same_function_char[u][t]=new char [100];
            }
        }
        //cout<<"ALLOCATION 11 "<<endl;
        for(int u=0;u<30;u++)
        {
            same_function_double[u]=new char* [20];
        }
        //cout<<"ALLOCATION 12 "<<endl;
        for(int u=0;u<30;u++)
        {
            for(int t=0;t<20;t++)
            {
                same_function_double[u][t]=new char [100];
            }
        }
        //cout<<"ALLOCATION 13 "<<endl;
        for(int u=0;u<30;u++)
        {
            same_function_float[u]=new char* [20];
        }
        //cout<<"ALLOCATION 14 "<<endl;
        for(int u=0;u<30;u++)
        {
            for(int t=0;t<20;t++)
            {
                same_function_float[u][t]=new char [100];
            }
        }
        //cout<<"ALLOCATION 15 "<<endl;
         for(int a=0;a<50;a++)
        {
            for(int b=0;b<100;b++)
                while_loops[a][b]='\0';
        }
      //  cout<<"ALLOCATION 16 "<<endl;
        for(int a=0;a<50;a++)
        {
            for(int b=0;b<150;b++)
                if_conditions[a][b]='\0';
        }
        for(int a=0;a<50;a++)
        {
            for(int b=0;b<150;b++)
                for_loops[a][b]='\0';
        }
	//cout<<"ALLOCATION 16 "<<endl;
    }

    void setdata(char *coming_code,int num_of_code)
    {
    	for(int a=0;a<1000000;a++)
	{
		code[a]=NULL;
	}
        code=coming_code;
       // cout<<"CODE : "<<code<<endl;
     //    cout<<"CODE 2: "<<coming_code<<endl;
        present_num_code=num_of_code;
	//cout<<"CODE number : "<<num_of_code<<"  :   "<<code<<endl;
    }
    void operator+(compare c2)
    {
       percentage_of_same_compare_code=0;
        percentage_same_code=0;
        percentage=0;
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
           // 	cout<<code[a]<<" : "<<c2.code[a]<<endl;
                percentage_same_code++;
            }


        }
        percentage=percentage_same_code/strlen(code)*100;
       // cout<<"PERCENTAGE : "<<percentage<<endl;
        if(percentage>70)
        {
          //  cout<<"CODE "<<present_num_code<<" is "<<percentage<<" SAME AS CODE "<<c2.present_num_code<<endl;
            percentage_more_than_70=true;
            return;
        }
        else
        {
            percentage_of_same_compare_code=percentage_same_code/strlen(code)*character_by_charcter_weight;
        //cout<<"Code Character by hcharac : "<<percentage_of_same_compare_code<<endl;
        }
    }
    void getvariables()
    {
    	//cout<<"HERE int here 1 "<<endl;
        any_int_variable=true;
        any_char_variable=true;
        any_double_variable=true;
        any_float_variable=true;
        //cout<<"HERE int here 2 "<<endl;
        for(int a=0;a<strlen(code);a++)
        {
        	//cout<<"HERE int here in here 1 "<<endl;
            if(code[a]==(char)105)
            {
            	//cout<<"HERE int here in here 2"<<endl;
                if(code[a+1]==(char)110)
                {//cout<<"HERE int here in here 3 "<<endl;
                    if(code[a+2]==(char)116)
                    {
                //    	cout<<"HERE int here in here 4 "<<endl;
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
              //          cout<<"HERE int here 3 "<<endl;
                        if(code[a-4]==(char)123 || code[a-4]==(char)125 || code[a-4]==(char)59)
                            for(int b=a;;b++)
                            {
                                if(code[b]==(char) 40)
                                {
                                    variable_function_differ_int=false;
                                    break;
                                }
                                if(code[b]==(char) 44)
                                {
                                    variable_function_differ_int=true;
                                    break;
                                }
                            }
                        if(variable_function_differ_int==true)
                            while (true) {
                                while (true) {
			//			cout<<"CODE at int  : "<<code[a]<<endl;
                                    compare_variables_int[(int)compare_full_variable_int][compare_singlealphabet_variable_int]=code[a];
                                    compare_singlealphabet_variable_int++;
                                    a++;
                                    if(code[a]==';')
                                    {
                                        compare_singlealphabet_variable_int=0;
                                        break;
                                    }
                                    if(code[a]==',')
                                    {
                                        compare_variables_int[(int)compare_full_variable_int][compare_singlealphabet_variable_int]='\0';
                                        compare_full_variable_int++;
                                        compare_singlealphabet_variable_int=0;
                                        a++;
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
        //cout<<"INT OVER "<<endl;
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
                            if(code[a-5]==(char)123 || code[a-5]==(char)125 || code[a-5]==(char)59)
                                for(int b=a;;b++)
                                {
                                    if(code[b]==(char) 40)
                                    {
                                        variable_function_differ_char=false;
                                        break;
                                    }
                                    if(code[b]==(char)44)
                                    {
                                        variable_function_differ_char=true;
                                        break;

                                    }
                                }
                            if(variable_function_differ_char==true)
                                while (true) {
                                    while (true) {
                                      //  cout<<"CODE : "<<code[a]<<" :  "<<endl;
                                        compare_variables_char[(int)compare_full_variable_char][compare_singlealphabet_variable_char]=code[a];
                                        compare_singlealphabet_variable_char++;
                                        a++;
                                        if(code[a]==(char)59)
                                        {
                                            compare_singlealphabet_variable_char=0;
                                            break;
                                        }
                                        if(code[a]==(char)44)
                                        {
                                            compare_variables_char[(int)compare_full_variable_char][compare_singlealphabet_variable_char]='\0';
                                            compare_full_variable_char++;
                                            compare_singlealphabet_variable_char=0;
                                            a++;
                                            break;
                                        }

                                    }
                                    if(code[a]==(char)59)
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
        //cout<<"char OVER "<<endl;
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
                                    if(code[a-7]==(char)123 || code[a-7]==(char)125 || code[a-7]==(char)59)
                                        for(int b=a;;b++)
                                        {
                                            if(code[b]==(char)40)
                                            {
                                                variable_function_differ_double=false;
                                                break;
                                            }
                                            if(code[b]==(char)44)
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
                                                if(code[a]==(char)44)
                                                {
                                                    compare_variables_double[(int)compare_full_variable_double][compare_singlealphabet_variable_double]='\0';
                                                    compare_full_variable_double++;
                                                    compare_singlealphabet_variable_double=0;
                                                    a++;
                                                    break;
                                                }
                                                if(code[a]==(char)59)
                                                {
                                                    compare_singlealphabet_variable_double=0;
                                                    break;
                                                }
                                            }
                                            if(code[a]==(char)59)
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
		//cout<<"double OVER "<<endl;
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
                                if(code[a-6]==(char)123|| code[a-6]==(char)125 || code[a-6]==(char)59)
                                    for(int b=a;;b++)
                                    {
                                        if(code[b]==(char)40)
                                        {
                                            variable_function_differ_float=false;
                                            break;
                                        }
                                        if(code[b]==(char)44)
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
                                            if(code[a]==(char)44)
                                            {
                                                compare_variables_float[(int)compare_full_variable_float][compare_singlealphabet_variable_float]='\0';
                                                compare_full_variable_float++;
                                                compare_singlealphabet_variable_float=0;
                                                a++;
                                                break;
                                            }
                                            if(code[a]==(char)59)
                                            {
                                                compare_singlealphabet_variable_float=0;
                                                break;
                                            }
                                        }
                                        if(code[a]==(char)59)
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
        //cout<<"float OVER "<<endl;
    }
    void compare_int_variables(compare c2)
    {
    	if(compare_full_variable_int==0)
        {
            any_int_variable=false;
            percentage_of_same_int_variables=0;
            return;
        }
        num_of_int_variables_same=0;
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
            ////cout<<"No Int Variable "<<endl;
            percentage_of_same_int_variables=0;
            return;
        }
        else if(num_of_int_variables_same==c2.compare_full_variable_int && num_of_int_variables_same==compare_full_variable_int )
        {
            percentage_of_same_int_variables=int_variable_weight;
            //cout<<"ALL THE INT VARIABLES OF CODE"<<present_num_code<<" AND CODE"<<c2.present_num_code<<"ARE SAME !"<<endl;
        }
        else   if(num_of_int_variables_same==compare_full_variable_int)
        {
            percentage_of_same_int_variables=int_variable_weight;
            //cout<<"ALL THE INT VARIABLES OF CODE "<<present_num_code<<" IS SAME AS IN CODE"<<c2.present_num_code<<endl;
        }
        else if(num_of_int_variables_same==c2.compare_full_variable_int)
        {
            percentage_of_same_int_variables=int_variable_weight;
            //cout<<"ALL THE INT VARIABLES OF CODE "<<c2.present_num_code<<" IS SAME AS IN CODE "<<present_num_code<< "!"<<endl;
        }
        else
        {
          //  cout<<"int same : "<<(num_of_int_variables_same)<<endl<<"same variables : "<<(compare_full_variable_int)<<endl;
            percentage_of_same_int_variables=((num_of_int_variables_same>compare_full_variable_int?compare_full_variable_int:num_of_int_variables_same)/(compare_full_variable_int))*int_variable_weight;
            //cout<<"NUMBER OF INT VARIABLES SAME : "<<num_of_int_variables_same<<endl;
            //cout<<"NUMBER OF INT VARIABLES SAME : "<<percentage_of_same_all_variables<<endl;
        }
    }
    void compare_char_variables(compare c2)
    {
    	if(compare_full_variable_char==0)
        {
            any_char_variable=false;
            percentage_of_same_char_functions=0;
            return;
            //cout<<"NO char VARIABLE SAME! "<<endl;
        }
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
            return;
            //cout<<"NO char VARIABLE SAME! "<<endl;
        }
        else if(num_of_char_variables_same==c2.compare_full_variable_char && num_of_char_variables_same==compare_full_variable_char )
        {
            percentage_of_same_char_variables=char_variable_weight;
            //cout<<"ALL THE char VARIABLES OF CODE="<<present_num_code<<" AND CODE "<<c2.present_num_code<<"ARE SAME !"<<endl;
        }
        else   if(num_of_char_variables_same==compare_full_variable_char)
        {
            percentage_of_same_char_variables=char_variable_weight;
            //cout<<"ALL THE char VARIABLES OF CODE "<<present_num_code<<" IS SAME AS IN CODE "<<present_num_code<<" !"<<endl;
        }
        else
        {
            percentage_of_same_char_variables=(num_of_char_variables_same>compare_full_variable_char?compare_full_variable_char:num_of_char_variables_same/compare_full_variable_char)*char_variable_weight;
            //cout<<"NUMBER OF char VARIABLES SAME : "<<num_of_char_variables_same<<endl;
        }

    }
    void compare_float_variables(compare c2)
    {
    	if(compare_full_variable_float==0)
		{
            any_float_variable=false;
            percentage_of_same_float_variables=0;
            return;
           //cout<<"NO float VARIABLE SAME! "<<endl;
        }
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
            return;
           //cout<<"NO float VARIABLE SAME! "<<endl;
        }
        else if(num_of_float_variables_same==c2.compare_full_variable_float && num_of_float_variables_same==compare_full_variable_float )
        {
            percentage_of_same_float_variables=float_variable_weight;
            //cout<<"ALL THE float VARIABLES OF CODE "<<present_num_code<<" AND CODE "<<c2.present_num_code<<" ARE SAME !"<<endl;
        }
        else   if(num_of_float_variables_same==compare_full_variable_float)
        {
            percentage_of_same_float_variables=float_variable_weight;
            //cout<<"ALL THE float VARIABLES OF CODE "<<present_num_code<<" IS SAME AS IN CODE "<<c2.present_num_code<<" !"<<endl;
        }
        else if(num_of_float_variables_same==c2.compare_full_variable_float)
        {
            percentage_of_same_float_variables=float_variable_weight;
            //cout<<"ALL THE float VARIABLES OF CODE "<<c2.present_num_code<<" IS SAME AS IN CODE "<<present_num_code<<" !"<<endl;
        }
        else
        {
            percentage_of_same_float_variables=(num_of_float_variables_same>compare_full_variable_float?compare_full_variable_float:num_of_float_variables_same/compare_full_variable_float)*float_variable_weight;
            //cout<<"NUMBER OF float VARIABLES SAME : "<<num_of_float_variables_same<<endl;
        }
    }
    void compare_double_variables(compare c2)
    {
    	 if(compare_full_variable_double==0)
        {
            any_double_variable=false;
            percentage_of_same_double_variables=0;
            return;
            //cout<<"NO double VARIABLE SAME! "<<endl;
        }
        num_of_double_variables_same=0;
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
            return;
            //cout<<"NO double VARIABLE SAME! "<<endl;
        }
        else if(num_of_double_variables_same==c2.compare_full_variable_double && num_of_double_variables_same==compare_full_variable_double )
        {
            percentage_of_same_double_variables=double_variable_weight;
            //cout<<"ALL THE double VARIABLES OF CODE "<<present_num_code<<" AND CODE "<<c2.present_num_code<<" ARE SAME !"<<endl;
        }
        else   if(num_of_double_variables_same==compare_full_variable_double)
        {
            percentage_of_same_double_variables=double_variable_weight;
            //cout<<"ALL THE double VARIABLES OF CODE "<<present_num_code<<" IS SAME AS IN CODE "<<c2.present_num_code<<" !"<<endl;
        }
        else if(num_of_double_variables_same==c2.compare_full_variable_double)
        {
            percentage_of_same_double_variables=double_variable_weight;
            //cout<<"ALL THE double VARIABLES OF CODE "<<c2.present_num_code<<" IS SAME AS IN CODE "<<present_num_code<<" !"<<endl;
        }
        else
        {
            percentage_of_same_double_variables=(num_of_double_variables_same>compare_full_variable_double?compare_full_variable_double:num_of_double_variables_same/compare_full_variable_double)*double_variable_weight;
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
      //  cout<<"PERCENTAGE OF INT VARIABLE "<<percentage_of_same_int_variables<<endl;
    }
    void getting_same_functions_int()
    {
        num_of_function_int=0;
        last_variable_int=0;
        return_name_parameter_int=0;
        number_of_parameters=0;
        check_int=false;

        for(int a=0;a<strlen(code);a++)
        {
            if(code[a-1]==(char)59 || code[a-1]==(char)125)
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
                                            if(code[a+7]!=(char)40)
                                            {
                                                for(int b=a+3;;b++)
                                                {
                                                    if(code[b]==(char)44)
                                                    {
                                                        check_int=false;
                                                        break;
                                                    }
                                                    if(code[b]==(char)40)
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
                        for(int b=a+1;code[b]!=(char)40;b++)
                        {
                            same_function_int[num_of_function_int][return_name_parameter_int][last_variable_int]=code[b];
                            last_variable_int++;
                        }
                        return_name_parameter_int++;
                    }
                    if(return_name_parameter_int==2)
                    {

                        number_of_parameters=1;
                        for(int b=a;code[b]!=(char) 41;b++)
                        {
                            if(code[b]==(char) 40 && code[b+1]==(char) 41)
                            {
                                number_of_parameters=0;
                                same_function_int[num_of_function_int][return_name_parameter_int][0]=(char)number_of_parameters;
                                break;
                            }
                            if(code[b]==(char) 44)
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
            if(code[a-1]==(char)59|| code[a-1]==(char)125)
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
                                    if(code[b]==(char)44)
                                    {

                                        check_char=false;
                                        break;
                                    }
                                    if(code[b]==(char)40)
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
                        for(int b=a;code[b]!=(char)41;b++)
                        {
                            if(code[b]==(char)40 && code[b+1]==(char)41)
                            {

                                number_of_parameters_char=0;
                                same_function_char[num_of_function_char][return_name_parameter_char][0]=(char)number_of_parameters_char;
                                break;
                            }
                            if(code[b]==(char)44)
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
            if(code[a-1]==(char)59 || code[a-1]==(char)125)
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
                                        if(code[b]==(char)44)
                                        {

                                            check_float=false;
                                            break;
                                        }
                                        if(code[b]==(char)40)
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
                number_of_functions_in_float=0;
             /*  if(check_float==true)
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
                        for(int b=a+1;code[b]!=(char)40;b++)
                        {
                            same_function_float[num_of_function_float][return_name_parameter_float][last_variable_float]=code[b];
                            last_variable_float++;
                        }
                        return_name_parameter_float++;

                    }
                    if(return_name_parameter_float==2)
                    {
                        number_of_parameters_float=1;
                        for(int b=a;code[b]!=(char)41;b++)
                        {
                            if(code[b]==(char)40 && code[b+1]==(char)41)
                            {

                                number_of_parameters_float=0;
                                same_function_float[num_of_function_float][return_name_parameter_float][0]=(float)number_of_parameters_float;
                                break;
                            }
                            if(code[b]==(char)44)
                            {
                                number_of_parameters_float++;
                            }
                        }
                        same_function_float[num_of_function_float][return_name_parameter_float][0]=(float)number_of_parameters_float;
                    }

                }
                */
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
            if(code[a-1]==(char)59 || code[a-1]==(char)125)
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
                                            if(code[b]==(char)44)
                                            {

                                                check_double=false;
                                                break;
                                            }
                                            if(code[b]==(char)40)
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
                        for(int b=a+1;code[b]!=(char)40;b++)
                        {
                            same_function_double[num_of_function_double][return_name_parameter_double][last_variable_double]=code[b];
                            last_variable_double++;
                        }
                        return_name_parameter_double++;

                    }
                    if(return_name_parameter_double==2)
                    {
                        number_of_parameters_double=1;
                        for(int b=a;code[b]!=(char)41;b++)
                        {
                            if(code[b]==(char)40 && code[b+1]==(char)41)
                            {
                                number_of_parameters_double=0;
                                same_function_double[num_of_function_double][return_name_parameter_double][0]=(double)number_of_parameters_double;
                                break;
                            }
                            if(code[b]==(char)44)
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
    	cout<<"INT FUNCTION : "<<number_of_functions_in_int<<endl;
        for(int a=0;a<number_of_functions_in_int;a++)
        {
            for(int b=0;b<3;b++)
            {
                for(int c=0;same_function_int[a][b][c]!='\0';c++)
                {
                    if(b==2)
                    {
                        cout<<(int)same_function_int[a][b][c];
                    }
                    else
                    {
                        cout<<same_function_int[a][b][c];
                    }
                }
                if((int)same_function_int[0][2][0]==0 && b==2)
                {
                    cout<<(int)same_function_int[a][b][0];
                }
		cout<<endl;
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
                        cout<<(int)same_function_char[a][b][c];
                    }
                    else
                    {
                        cout<<same_function_char[a][b][c];
                    }
                }
                if((int)same_function_char[0][2][0]==0 && b==2)
                {
                    cout<<(int)same_function_char[a][b][0];
                }
                cout<<endl;
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
                        cout<<(int)same_function_double[a][b][c];
                    }
                    else
                    {
                        cout<<same_function_double[a][b][c];
                    }
                }
                if((int)same_function_double[0][2][0]==0 && b==2)
                {
                    cout<<(int)same_function_double[a][b][0];
                }
                cout<<endl;
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
                        cout<<(int)same_function_float[a][b][c];
                    }
                    else
                    {
                        cout<<same_function_float[a][b][c];
                    }
                }
                if((int)same_function_float[0][2][0]==0 && b==2)
                {
                    cout<<(int)same_function_float[a][b][0];
                }
                cout<<endl;
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
            percentage_of_same_int_functions=int_function_weight;
        }
        else
        {
            percentage_of_same_int_functions=(same_full_int_function_found/number_of_functions_in_int)*int_function_weight;
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
            percentage_of_same_char_functions=char_function_weight;
        }
        else
        {
            percentage_of_same_char_functions=(same_full_char_function_found/number_of_functions_in_char)*char_function_weight;
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
            percentage_of_same_float_functions=float_function_weight;
        }
        else
        {
            percentage_of_same_float_functions=(same_full_float_function_found/number_of_functions_in_float)*float_function_weight;
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
            percentage_of_same_double_functions=double_function_weight;
        }
        else
        {
            //cout<<"HOW : "<<same_full_double_function_found<<" "<<number_of_functions_in_double<<endl;
            percentage_of_same_double_functions=(same_full_double_function_found/number_of_functions_in_double)*double_function_weight;
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

    void getting_if_conditions()
    {
    	//cout<<"CANT COME HERE "<<endl;
        number_of_ifs=0;

        for(int a=0;a<strlen(code);a++)
        {

            if(code[a]=='i' && code[a+1]=='f' && code[a+2]=='(')
            {
                index_of_ifs=0;
                //cout<<code[a]<<endl;
                for(int b=a+3;;b++)
                {
              //  	cout<<"CODE B : "<<code[b]<<endl;
                    if(((code[b]==(char)41) && (code[b+1]==(char)123)))
                    {
                        break;
                    }
                    if(code[b]==(char)59)
                    {
                        for(int alpha=b;code[alpha]!=(char)41;alpha--)
                        {
                            code[alpha]='\0';
                        }
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
    	if(number_of_ifs==0)
	{
		any_if_statement=false;
		percentage_of_ifs_statement=0.0;
		return;
	}
        any_if_statement=true;
        percentage_of_ifs_statement=0;
        number_of_if_statements_same=0;
        for(int a=0;a<number_of_ifs;a++)
        {
            for(int b=0;b<c1.number_of_ifs;b++)
            {
                for(int c=0;if_conditions[a][c]!='\0' || c1.if_conditions[b][c]!='\0';
                   c++)
                {

                    if(if_conditions[a][c]==c1.if_conditions[b][c] && if_conditions[a][c+1]=='\0' && c1.if_conditions[b][c+1]=='\0')
                    {
                    	if(a!=number_of_ifs)
			{
				a++;
			}
                        number_of_if_statements_same++;
                    }
                    if(if_conditions[a][c]!=c1.if_conditions[b][c])
                    {
                        break;
                    }

                }
            }

        }
        //cout<<"NUMBER OF IF STATEMENT SAME : "<<number_of_if_statements_same<<endl;
        if(number_of_if_statements_same!=0 || number_of_ifs!=0)
        {
            any_if_statement=true;
        if(number_of_if_statements_same==number_of_ifs && number_of_if_statements_same==c1.number_of_ifs)
        {
            percentage_of_ifs_statement=if_statement_weight;
        }
        else
        {
            percentage_of_ifs_statement=(((float)number_of_if_statements_same)/((float)number_of_ifs))*if_statement_weight;
        }
        }
        else
        {
            percentage_of_ifs_statement=0;
            any_if_statement=false;
        }
        //cout<<"PERCENTAGE OF IFS STATMENT : "<<percentage_of_ifs_statement<<endl;

    }
    void getting_for_loops()
    {
        number_of_for_loops=0;
        index_of_for = 0;
	int number_of_semicolon=0;
        for(int a=0;a<strlen(code);a++)
        {

            if(code[a]=='f' && code[a+1]=='o' && code[a+2]=='r' && code[a+3]=='(')
            {
		number_of_semicolon=0;
                for(int b=a+4;a<strlen(code);b++)
                {
                    if(code[b]==')' && code[b+1]=='{')
                    {
                        break;
                    }
                    if(code[b]==(char)59)
		      {
		      	if(number_of_semicolon==2)
			{
		      	for(int alpha=b;code[alpha+1]!=')';alpha--)
			{
			//	cout<<"ABBENDENING CODE  : "<<code[alpha]<<endl;
				for_loops[number_of_for_loops][index_of_for]='\0';
				index_of_for--;
			}
			break;
			}
			number_of_semicolon++;
		      }
                    for_loops[number_of_for_loops][index_of_for]=code[b];
                    index_of_for++;
                }
                number_of_for_loops++;
                index_of_for=0;

            }
        }
        //cout<<"NUMBER OF LOOPS : "<<number_of_for_loops<<endl;
        //for(int a=0;a<number_of_for_loops;a++)
        //{
          //  cout<<"FOR STATEMENT : "<<for_loops[a]<<endl;
        //}

    }
    void comparing_for_loop(compare c1)
    {
    	if(number_of_for_loops==0)
	{
		any_for_loop=false;
		percentage_of_for_loops=0.0;
		return;
	}
        any_for_loop=true;
        number_of_for_same=0;
        for(int a=0;a<number_of_for_loops;a++)
        {
            for(int b=0;b<c1.number_of_for_loops;b++)
            {
                for(int c=0;for_loops[a][c]!='\0' || c1.for_loops[b][c]!='\0';
                    c++)
                {
                    if(for_loops[a][c]==c1.for_loops[b][c] && for_loops[a][c+1]=='\0' && c1.for_loops[b][c+1]=='\0')
                    {
                    	if(a!=number_of_for_loops)
			{
				a++;
			}
                        number_of_for_same++;
                    }
                    if(for_loops[a][c]!=c1.for_loops[b][c])
                    {
                        break;
                    }

                }
            }
        }
        if(number_of_for_loops!=0 || number_of_for_same!=0)
        {
            any_for_loop=true;
        if(number_of_for_same==number_of_for_loops && number_of_for_same==c1.number_of_for_loops)
        {
            percentage_of_for_loops=for_statement_weight;
        }
        else
        {
            percentage_of_for_loops=((float)(number_of_for_same)/(float)(number_of_for_loops))*for_statement_weight;
        }
        //cout<<"PERCENTAGE OF FOR SAME : "<<percentage_of_for_loops<<endl;
        }
        else
        {
            any_for_loop=false;
            percentage_of_for_loops=0;
        }

    }
    void get_while_loop()
    {
    	//cout<<"WHILE LOOP ENTRY"<<endl;
        number_of_while_loops=0;
        index_of_while=0;
        for(int a=0;a<strlen(code);a++)
        {
        	//cout<<"HERE  WHILE"<<endl;
            if(code[a]=='w' && code[a+1]=='h' && code[a+2]=='i' && code[a+3]=='l' && code[a+4]=='e' && code[a+5]=='(' )
            {
			//cout<<"HERE  WHILE 2"<<endl;
                for(int b=a+6;b<strlen(code);b++)
                {
                	//cout<<"HERE  WHILE 3"<<endl;
                    if((code[b]==')' && code[b+1]=='{') )
                    {
                        break;
                    }
                    if(code[b]==(char)59)
		      {
				for(int alpha=b;code[alpha+1]!=')';alpha--)
				{
					//cout<<"WHILE CODE ABONDENT : "<<code[alpha]<<endl;
					while_loops[number_of_while_loops][index_of_while]='\0';
					index_of_while--;
				}
				break;
		      }
                    while_loops[number_of_while_loops][index_of_while]=code[b];
                    index_of_while++;
                }
                number_of_while_loops++;
                index_of_while=0;
            }

        }
        //   for(int a=0;a<number_of_while_loops;a++)
        //{
          //  cout<<"WHILE LOOPS  : "<<while_loops[a]<<endl;
       //}

    }

    void getting_while_compared(compare c1)
    {
    	if(number_of_while_loops==0)
	{
		percentage_of_while=0.0;
		any_while_loop=false;
		return;
	}
        any_while_loop=true;
        percentage_of_while=0.0;
        int number_of_while_statements_same=0;
        for(int a=0;a<number_of_while_loops;a++)
        {
            for(int b=0;b<c1.number_of_while_loops;b++)
            {
                for(int c=0;while_loops[a][c]!='\0' || c1.while_loops[b][c]!='\0';
                    c++)
                {
                    if(while_loops[a][c]==c1.while_loops[b][c] && while_loops[a][c+1]=='\0' && c1.while_loops[b][c+1]=='\0')
                       {
                       	if(a!=number_of_while_loops)
			{
				a++;
			}
                           number_of_while_statements_same++;
                       }
                       if(while_loops[a][c]!=c1.while_loops[b][c])
                       {
                           break;
                       }
                }
        }

        }
        //cout<<"NUMBER OF WHILE SAME ARE : "<<number_of_while_statements_same<<endl;
        if(number_of_while_statements_same!=0 || number_of_while_loops!=0)
        {
            any_while_loop=true;
        if(number_of_while_statements_same==number_of_while_loops && c1.number_of_while_loops==number_of_while_statements_same)
        {
            percentage_of_while=while_do_while_statement_weight;
        }
        else
        {
            percentage_of_while=((float)number_of_while_statements_same)/((float)number_of_while_loops)*while_do_while_statement_weight;
        }
        }
        else
        {
            percentage_of_while=0.0;
            any_while_loop=false;
        }
        //cout<<"PERCENTAGE OF WHILE LOOP SAME : "<<percentage_of_while<<endl;

    }
    void get_whole_percentage(compare c1)
    {
    	//cout<<"final : it came here not"<<endl;
    	if(percentage<70)
	{
      //  cout<<"BEFORE IF VARVIABLE PERCENTAGE : "<<percentage_of_same_all_variables<<endl;
        if(number_of_functions_in_int==0 && number_of_functions_in_char==0 && number_of_functions_in_double==0 && number_of_functions_in_float==0)
        {
            percentage_of_same_functions=0;
            percentage_of_same_all_variables*=2;
        }
       else if(any_int_variable==false && any_float_variable==false && any_double_variable==false
           && any_char_variable==false)
        {
            percentage_of_same_functions*=2;
            percentage_of_same_all_variables=0;
        }
        if(number_of_functions_in_int==0 && number_of_functions_in_char==0 && number_of_functions_in_double==0 && number_of_functions_in_float==0 && any_int_variable==false && any_float_variable==false && any_double_variable==false
           && any_char_variable==false)
        {
            //all to logical part
            percentage_of_for_loops*=1.66666667;
            percentage_of_while*=1.66666667;
            percentage_of_same_compare_code*=2;
            percentage_of_ifs_statement*=1.5;
            percentage_of_same_functions=0;
            percentage_of_same_all_variables=0;
        }
        if(any_if_statement==false && any_for_loop==false && any_while_loop==false)
        {
            percentage_of_same_functions*=2;
            percentage_of_same_all_variables*=2;
            percentage_of_same_compare_code*=2;
        }
        if(any_if_statement==true && any_for_loop==true && any_while_loop==false)
        {
            percentage_of_ifs_statement*=1.375;
            percentage_of_for_loops*=1.5;
            percentage_of_while=0;
        }
        if(any_if_statement==false && any_for_loop==true && any_while_loop==true)
        {
            percentage_of_ifs_statement=0;
            percentage_of_for_loops*=1.5;
            percentage_of_while*=1.5;
        }
        if(any_if_statement==true && any_for_loop==false && any_while_loop==true)
        {
            percentage_of_ifs_statement*=1.375;
            percentage_of_for_loops=0.0;
            percentage_of_while*=1.5;
        }
        if(any_if_statement==true && any_for_loop==false && any_while_loop==false)
        {
            percentage_of_ifs_statement*=2.5;
            percentage_of_for_loops=0;
            percentage_of_while=0;
        }
        if(any_if_statement==false && any_for_loop==true && any_while_loop==false)
        {
            percentage_of_ifs_statement=0;
            percentage_of_for_loops*=3.3333333333;
            percentage_of_while=0;
        }
        if(any_if_statement==false && any_for_loop==false && any_while_loop==true)
        {
            percentage_of_ifs_statement=0;
            percentage_of_for_loops=0;
            percentage_of_while*=3.333333333;
        }
     //   cout<<"PERCENTAGE OF  variables : "<<percentage_of_same_all_variables<<endl;
       // cout<<"PERCENTAGE OF  functions : "<<percentage_of_same_functions<<endl;
        //cout<<"PERCENTAGE OF  ifs : "<<percentage_of_ifs_statement<<endl;
       //cout<<"PERCENTAGE OF  for s : "<<percentage_of_for_loops<<endl;
        //cout<<"PERCENTAGE OF  while : "<<percentage_of_while<<endl;
       //cout<<"PERCENTAGE OF  character : "<<percentage_of_same_compare_code<<endl;

	percentage_of_whole_code=(int)(percentage_of_same_functions+percentage_of_same_all_variables+percentage_of_same_compare_code+percentage_of_for_loops+percentage_of_while+percentage_of_ifs_statement);
	if(percentage_of_whole_code>100)
    {
        percentage_of_whole_code=100;
    }
	char buffer[10000] = {};
	sprintf(buffer, "%d", percentage_of_whole_code);
	strcat(final_results[file_taker],file_names[present_num_code]);
	strcat(final_results[file_taker]," , ");
	strcat(final_results[file_taker],file_names[c1.present_num_code]);
	strcat(final_results[file_taker],"  ,  ");
	strcat(final_results[file_taker],buffer);
	//cout<<final_results[file_taker]<<endl;
	file_taker++;
	//cout<<"FILE TAKER "<<file_taker<<endl;
       return;
	}
	else
	{
	percentage_of_whole_code=(int)percentage;
	if(percentage_of_whole_code>100)
    {
        percentage_of_whole_code=100;
    }
	char buffer[10000] = {};
	sprintf(buffer, "%d", percentage_of_whole_code);
	strcat(final_results[file_taker],file_names[present_num_code]);
	strcat(final_results[file_taker]," , ");
	strcat(final_results[file_taker],file_names[c1.present_num_code]);
	strcat(final_results[file_taker],"  ,  ");
	strcat(final_results[file_taker],buffer);
	//cout<<final_results[file_taker]<<endl;
	//cout<<"FILE TAKER "<<file_taker<<endl;
	file_taker++;
       return;
	}
    }
};
void  main_program_run(string *files,int number_of_c) {

    int num_of_code=number_of_c;
   /* cout<<"Enter How many Codes you want to check : ";
    cin>>num_of_code;*/
    int *reducer_code=new int [100];
    int *reducer_code1=new int [100];
    char **code1=new char* [num_of_code];
   // cout<<"HERE again"<<endl;
    final_results=new char* [100000];
  //  cout<<"HERE again 2"<<endl;
    for(int a=0;a<100000;a++)
    {
    	final_results[a]=new char [1000];
    }
    //cout<<"HERE again 3"<<endl;
     for(int a=0;a<100000;a++)
    {
    	for(int b=0;b<1000;b++)
	{
    	final_results[a][b]=NULL;
	}
    }
	//cout<<"HERE again 4"<<endl;
    for(int a=0;a<num_of_code;a++)
    {
        code1[a]=new char [100000];
    }
	for(int a=0;a<num_of_code;a++)
	{
		for(int b=0;b<num_of_code;b++)
		{
			code1[a][b]=NULL;
		}
	}
    reducer_code[0]=0;
    reducer_code1[0]=0;
    compare c1[num_of_code];
    string checker;
  for(int a=0;a<num_of_code;a++)
        {
            ifstream checker;
            const char *filename_new=new char [300];
            filename_new=filesforyou[a].c_str();
            checker.open(filename_new);
            for(int b=0;b<99999;b++)
            {
                checker>>code1[a][b];
            }
            checker.close();
        }
    file_taker=0;

    for(int a=0;a<num_of_code;a++)
    {
   // cout<<file_names[a]<<endl;
        c1[a].setdata(code1[a],a);
       // cout<<"COME HERE 1 "<<endl;
        c1[a].getvariables();
        //cout<<"COME HERE 2 "<<endl;
        c1[a].getting_if_conditions();
        //cout<<"COME HERE 3"<<endl;
        c1[a].getting_same_functions_int();
        //cout<<"COME HERE 4"<<endl;
        //c1[a].show_int_functions();
      //  c1[a].show_char_functions();
        //c1[a].show_double_functions();
       // c1[a].show_float_functions();
        c1[a].getting_for_loops();
        //cout<<"COME HERE 5 "<<endl;
        c1[a].get_while_loop();
        //cout<<"COME HERE 6 "<<endl;
    }

    for(int a=0;a<num_of_code;a++)
    {
        for(int b=0;b<num_of_code;b++)
        {
            if(b!=a)
            {
               c1[a]+c1[b];
              if(c1[a].percentage<70)
                {
              //  	cout<<"HERE 1"<<endl;
                    c1[a].getting_while_compared(c1[b]);
			//cout<<"HERE 2"<<endl;
                    c1[a].comparing_for_loop(c1[b]);
                //    cout<<"HERE 3"<<endl;
                    c1[a].getting_compare_if_statements(c1[b]);
                  //  cout<<"HERE 4"<<endl;
                    c1[a].compare_int_variables(c1[b]);  //problem is here
                   // cout<<"HERE 5"<<endl;
                    c1[a].compare_float_variables(c1[b]);
                   // cout<<"HERE 6"<<endl;
                    c1[a].compare_char_variables(c1[b]);
                   // cout<<"HERE 7"<<endl;
                    c1[a].compare_double_variables(c1[b]);
                   // cout<<"HERE 8"<<endl;
                    c1[a].Compare_int_functions(c1[b]);
                    //cout<<"HERE 9"<<endl;
                    c1[a].Compare_char_functions(c1[b]);
                    //cout<<"HERE 10"<<endl;
                    c1[a].Compare_float_functions(c1[b]);
                    //cout<<"HERE 11"<<endl;
                    c1[a].Compare_double_functions(c1[b]);
                    //cout<<"HERE 12"<<endl;
                    c1[a].all_same_variables();
                    //cout<<"HERE 13"<<endl;
                    c1[a].get_all_functions();
                    //cout<<"HERE 14"<<endl;

                  //  cout<<"HERE 15"<<endl;
                  //  cout<<"******************************************************"<<endl;
            }
            c1[a].get_whole_percentage(c1[b]);
        }
    }

    }
      for(int a=0;a<num_of_code;a++)
    {
    	delete[] code1[a];
    }
    delete code1;
   // int ender;
    //cout<<"PRESS ENTER TO QUIT  :  ";
    //cin>>ender;

}

int get_file_name()
{
    file_names=new char* [10000];
    for(int index=0;index<10000;index++)
    {
        file_names[index]=new char [10000];
    }
    for(int a=0;a<MAX_PATH;a++)
    {
        filename[a]='\0';
    }

    OPENFILENAME ofn;
    ZeroMemory( &filename, sizeof( filename ) );
    ZeroMemory( &ofn,      sizeof( ofn ) );
    ofn.lStructSize  = sizeof( ofn );
    ofn.hwndOwner    = NULL;  // If you have a window to center over, put its HANDLE here
    ofn.lpstrFilter  = "CPP FILES\0*.cpp";
    ofn.lpstrFile    = filename;
    ofn.nMaxFile     = MAX_PATH;
    ofn.lpstrTitle   = "Select a cpp file";
    ofn.Flags = OFN_ALLOWMULTISELECT | OFN_EXPLORER;
    GetOpenFileName(&ofn);
        //cout<<filename<<endl;
        int a=0,index_found=-1,charac_index=0;
        a=strlen(filename);
        while(1)
        {
            if(filename[a]==NULL)
            {
                if(filename[a+1]==NULL)
                {
                    if(filename[a+2]==NULL)
                    {
                    break;
                    }
                }
            }
            if(filename[a]==NULL)
            {
                index_found++;
                charac_index=0;
                a++;
            }
            file_names[index_found][charac_index]=filename[a];
            charac_index++;
            a++;
        }
        index_found++;
        for(int l=0;l<index_found;l++)
        {
            for(int k=0;;k++)
            {
            if(file_names[l][k]=='.' && file_names[l][k+1]=='c' &&file_names[l][k+2]=='p' && file_names[l][k+3]=='p')
            {
                file_names[l][k+4]='\0';
                break;
            }
            }
        }
        for(int x=0;;x++)
        {
           if( filename[x]==NULL)
           {
               filename[x]='\\';
               filename[x+1]=NULL;
               break;
           }
        }
        full_file=new char* [index_found];
        for(int x=0;x<index_found;x++)
        {
            full_file[x]=new char[260];
        }
        for(int x=0;x<index_found;x++)
        {
        full_file[x]=strcat(filename,file_names[x]);
        filesforyou[x]=full_file[x];
        for(int k=0;;k++)
            {
            if(filename[k]==NULL)
            {
                for(;;k--)
                {
                    if(filename[k]=='\\')
                    {
                        filename[k+1]='\0';
                        break;
                    }
                }
                break;

            }
            }

        }
        return index_found;
}
void deallocation_called(compare c1)
{
    for(int a=0; a<file_taker; a++)
    {
        delete[] file_names[a];
    }
    delete file_names;
    for(int a=0; a<file_taker; a++)
    {
        delete[] final_results[a];
    }
    delete final_results;
    file_taker=0;
    for(int a=0; a<50; a++)
    {
        delete[]   c1.for_loops[a];
    }
    delete c1.for_loops;
    //cout<<"ALLOCATION 1 "<<endl;
    for(int a=0; a<50; a++)
    {
        delete[]  c1.if_conditions[a];
    }
    delete c1.if_conditions;
    //cout<<"ALLOCATION 2 "<<endl;
    for(int a=0; a<100; a++)
    {
        delete[]  c1.compare_variables_int[a];
    }
    delete c1.compare_variables_int;
    // cout<<"ALLOCATION 3 "<<endl;
    for(int a=0; a<100; a++)
    {
        delete[]    c1.compare_variables_float[a];
    }
    delete c1.compare_variables_float;
    //cout<<"ALLOCATION 4 "<<endl;
    for(int a=0; a<100; a++)
    {
        delete[]  c1.compare_variables_char[a];
    }
    delete c1.compare_variables_char;
    //cout<<"ALLOCATION 5 "<<endl;
    for(int a=0; a<100; a++)
    {
        delete[] c1.compare_variables_double[a];
    }
    delete c1.compare_variables_double;
    //cout<<"ALLOCATION 6 "<<endl;
    for(int a=0; a<50; a++)
    {
        delete[] c1.while_loops[a];
    }
    delete c1.while_loops;
 //   cout<<"DOUBLE POINTER DELETED!"<<endl;
    //cout<<"ALLOCATION 7 "<<endl;

    //cout<<"ALLOCATION 8 "<<endl;
      for(int u=0; u<30; u++)
    {
        delete[] c1.same_function_int[u];
    }
    delete c1.same_function_int;
    //cout<<"ALLOCATION 9 "<<endl;

    //cout<<"ALLOCATION 10 "<<endl;
    for(int u=0; u<30; u++)
    {
    delete[]   c1.same_function_char[u];
    }
   delete c1.same_function_char;
    //cout<<"ALLOCATION 11 "<<endl;

    //cout<<"ALLOCATION 12 "<<endl;
    for(int u=0; u<30; u++)
    {
        delete[] c1.same_function_double[u];
    }
    delete c1.same_function_double;
    //cout<<"ALLOCATION 13 "<<endl;

    //cout<<"ALLOCATION 14 "<<endl;
    for(int u=0; u<30; u++)
    {
        delete[]    c1.same_function_float[u];

    }
    delete  c1.same_function_float;


	 //cout<<"ALLOCATION 14 "<<endl;
    for(int u=0; u<500; u++)
    {
        delete[]    percent[u];

    }
    delete[] c1.code;
    delete percent;


	delete filesforyou;
	delete &c1;
}
