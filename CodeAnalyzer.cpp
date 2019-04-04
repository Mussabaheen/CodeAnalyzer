#include <iostream>
#include <SFML/Graphics.hpp>
#include <string>
#include <string.h>
#include <sstream>
#include <windows.h>
#include "THE_LAST_ONE.h"
#include <fstream>
string get_save_file_name();
using namespace std;
using namespace sf;
int files_compare=0;
bool file_exist=true;
int main ()
{
    int limit=0;
bool browse_button=true,reset_button=true,Report_button=true;
    int x=VideoMode::getDesktopMode().width/1.1;
    int y=VideoMode::getDesktopMode().height/1.1;

    cout<<VideoMode::getDesktopMode().width<<","<<VideoMode::getDesktopMode().height<<endl;

    RenderWindow window;
    window.create(VideoMode(x,y), "CodeAnalyzer v1.0", Style::Titlebar | Style::Close);

    Texture texture, texture1;

    cout <<"window width"<< window.getSize().x << endl;
    cout <<"window height"<< window.getSize().y << endl;

    if(!texture.loadFromFile("background1.png"))
    {
        cout<<"Error Loading background"<<endl;
    }

    if(!texture1.loadFromFile("logo.png"))
    {
        cout<<"Error Loading background"<<endl;
    }


    Sprite backg, logo;
    backg.setTexture(texture);

    logo.setTexture(texture1);
    logo.setScale(0.14,0.14);
    logo.setPosition(x/38.4,y/1.11340);

    Font fontt;
    if (!fontt.loadFromFile("PRIMETIME.ttf"))
    {
        cout<<"Unable to load font"<<endl;
    }

    Font font;
    if (!font.loadFromFile("NEOTERICc - Bold DEMO VERSION.ttf"))
    {
        cout<<"Unable to load font"<<endl;
    }

    Font font2;
    if (!font2.loadFromFile("Consolas.ttf"))
    {
        cout<<"Unable to load font"<<endl;
    }

    mool:
    	limit=0;
	files_compare=0;
	file_taker=0;
	reset=false;
    	Text title;
    title.setFont(fontt);
    title.setString("Code Analyzer");
    title.setCharacterSize(x/19);
    title.setStyle(Text::Bold);
    title.setPosition(Vector2f(x/3.69230,0));
    title.setFillColor(Color(255,255,255));

    Text version;
    version.setFont(font2);
    version.setString("v1.0");
    version.setCharacterSize(x/55);
    version.setStyle(Text::Bold);
    version.setPosition(Vector2f(x/1.35,y/16.36363636));
    version.setFillColor(Color(255,255,255));

    Text ins;
    ins.setFont(font);
    ins.setString("Instructions");
    ins.setCharacterSize(x/68.571428);
    ins.setStyle(Text::Bold);
    ins.setStyle(Text::Underlined);
    ins.setPosition(Vector2f(x/54.85714,y/4.32));
    ins.setFillColor(Color(42,112,181));

    Text ins1;
    ins1.setFont(font);
    ins1.setString("- Click \"Browse\" button to load multiple .cpp files");
    ins1.setCharacterSize(x/87.272727);
    ins1.setPosition(Vector2f(x/54.85714,y/3.7241));
    ins1.setFillColor(Color(1,1,1));

    Text ins2;
    ins2.setFont(font);
    ins2.setString("- Click \"Get Report\" button to Export Report");
    ins2.setCharacterSize(x/87.272727);
    ins2.setPosition(Vector2f(x/54.85714,y/3.375));
    ins2.setFillColor(Color(1,1,1));

    Text ins3;
    ins3.setFont(font);
    ins3.setString("- Click \"Reset\" button to clear previous entry");
    ins3.setCharacterSize(x/87.272727);
    ins3.setPosition(Vector2f(x/54.85714,y/3.08571));
    ins3.setFillColor(Color(1,1,1));


    Text t1[1000];
    int text_difference=22;
    int text_incrementer=0;
    for(int var=0; var<1000; var++)
    {
        t1[var].setFont(font2);
        t1[var].setString("");
        t1[var].setCharacterSize(y/54);
        t1[var].setStyle(Text::Bold);
        t1[var].setPosition(Vector2f((x/3.14754),(y/5.2682)+text_incrementer));
        text_incrementer+=text_difference;
        t1[var].setFillColor(Color(0,0,0));
    }

    RectangleShape rectop;
    rectop.setFillColor(Color(42,112,181));
    rectop.setSize(sf::Vector2f(x,y/8.3076));
    rectop.setPosition(Vector2f(0,0));

    Text t;
    t.setFont(font);
    t.setString("Loaded Files: ");
    t.setCharacterSize(x/60);
    t.setStyle(Text::Bold);
    t.setPosition(Vector2f(x/3.2,y/8.3076));
    t.setFillColor(Color(42,112,181));

    RectangleShape recleft;
    recleft.setFillColor(Color(235,235,235));
    recleft.setSize(sf::Vector2f(x/2.74285,y/1.963636));
    recleft.setPosition(Vector2f(x/3.2,y/6.3529));

    RectangleShape recbottom;
    recbottom.setFillColor(Color(70,70,70));
    recbottom.setSize(sf::Vector2f(x,y/8.3076));
    recbottom.setPosition(Vector2f(0,y/1.1368));

    Text browse;
    browse.setFont(font);

    browse.setString("Browse");
    browse.setCharacterSize(x/54.4705);
    browse.setStyle(Text::Bold);
    browse.setPosition(Vector2f(x/2.78260,y/1.42105));
    browse.setFillColor(Color(255,255,255));

    RectangleShape recbutton1;
    recbutton1.setFillColor(Color(118,201,115));
    recbutton1.setSize(sf::Vector2f(x/6.4, y/15.42857));
    recbutton1.setPosition(Vector2f(x/3.2,y/1.44));

    Text rst;
    rst.setFont(font);
    rst.setString("Reset");
    rst.setCharacterSize(x/54.4705);
    rst.setStyle(Text::Bold);
    rst.setPosition(Vector2f(x/1.745454,y/1.421052));
    rst.setFillColor(Color(255,255,255));

    RectangleShape recbutton3;
    recbutton3.setSize(sf::Vector2f(x/6.4,y/15.42857));
    recbutton3.setPosition(Vector2f(x/1.92,y/1.44));
    if(browse_button==true)
    {
    	recbutton3.setFillColor(Color(190,190,190));
    }
    else
    {
    	    recbutton3.setFillColor(Color(118,201,115));

    }


    Text rep;
    rep.setFont(font);
    rep.setString("Get Report");
    rep.setCharacterSize(x/54.4705);
    rep.setStyle(Text::Bold);
    rep.setPosition(Vector2f(x/2.25882,y/1.2558));
    rep.setFillColor(Color(255,255,255));

    RectangleShape recbutton4;
    recbutton4.setSize(sf::Vector2f(x/8,y/15.4285));
    recbutton4.setPosition(Vector2f(x/2.3414,y/1.27058));
if(reset_button==true && browse_button!=true)
{
	recbutton4.setFillColor(Color(42,112,181));

}
else
{
		recbutton4.setFillColor(Color(192,192,192));
}
    Text quit;
    quit.setFont(font);
    quit.setString("Quit");
    quit.setCharacterSize(x/54.4705);
    quit.setStyle(Text::Bold);
    quit.setPosition(Vector2f(x/1.09714,y/1.090909));
    quit.setFillColor(Color(255,255,255));

    RectangleShape recbutton6;
    recbutton6.setFillColor(Color(243,33,62));
    recbutton6.setSize(sf::Vector2f(x/10.666666,y/15.42857));
    recbutton6.setPosition(Vector2f(x/1.129411,y/1.102040));

    Text s1;
    s1.setFont(font);
    s1.setString("Move up");
    s1.setCharacterSize(x/76.8);
    s1.setStyle(Text::Bold);
    s1.setPosition(Vector2f(x/2.15730,y/6.545454));
    s1.setFillColor(Color(255,255,255));

    Text s2;
    s2.setFont(font);
    s2.setString("Move down");
    s2.setCharacterSize(x/76.8);
    s2.setStyle(Text::Bold);
    s2.setPosition(Vector2f(x/2.15730,y/1.57664));
    s2.setFillColor(Color(255,255,255));

    RectangleShape rs1;
    rs1.setFillColor(Color(170, 170, 170));
    rs1.setSize(sf::Vector2f(x/2.742857,y/36));
    rs1.setPosition(Vector2f(x/3.2,y/6.35294));

    RectangleShape rs2;
    rs2.setFillColor(Color(170, 170, 170));
    rs2.setSize(sf::Vector2f(x/2.742857,y/36));
    rs2.setPosition(Vector2f(x/3.2,y/1.56521));


    int next_start=0;
    int next_start1=0;
    int y_fixer=(y/49.09090909090909090909090909);
    // int l=110;
    while(window.isOpen())
    {
        Event Event;

        while (window.pollEvent(Event))
        {
            switch (Event.type)
            {
            case Event::Closed:
                window.close();
            case Event::MouseEntered:
                cout<<"Mouse Screen Bound"<<endl;
                break;
            case Event::MouseLeft:
                cout<<"Mouse Left"<<endl;
                break;
            case Event::MouseMoved:
                cout<<"X: "<< Event.mouseMove.x << " Y: "<<Event.mouseMove.y <<endl;
                break;
            case Event::MouseButtonPressed:
                if(Event.mouseButton.button == Mouse::Left)
                {
                    cout<<"Left Button Pressed at x: "<< Event.mouseButton.x << " Y: "<< Event.mouseButton.y<<endl;

                    if(Event.mouseButton.x >= x/3.2 && Event.mouseButton.x <= x/2.133333 && Event.mouseButton.y >= y/1.44 && Event.mouseButton.y <= y/1.31707 ) //Browse button
                    {
				if(browse_button==true)
				{

                        cout<<"Browse Button Pressed"<<endl;
                        limit=get_file_name();
                        for(int set_string=0; set_string<y_fixer; set_string++)
                        {
                            t1[set_string].setString(file_names[set_string]);
                        }
                        if(limit>0)
                        {

                        recbutton1.setFillColor(Color(192, 192, 192));
					recbutton4.setFillColor(Color(42,112,181));
					recbutton3.setFillColor(Color(118,201,115));
					browse_button=false;
					reset_button=true;
					Report_button=true;
                        }

			}
                    }
                    if(Event.mouseButton.x >= x/1.92 && Event.mouseButton.x <= x/1.4769 && Event.mouseButton.y >= y/1.44 && Event.mouseButton.y <= y/1.31707 ) //rst Button
                    {
				if(reset_button==true)
				{
				recbutton3.setFillColor(Color(192, 192, 192));
				recbutton4.setFillColor(Color(192, 192, 192));
				recbutton1.setFillColor(Color(118,201,115));
				reset_button=false;
				Report_button=false;
				cout<<"Reset button pressed"<<endl;
				reset=true;
				//main_program_run(filesforyou,limit);
				browse_button=true;
				window.draw(recbutton3);
				goto mool;
				}
                    }
                    if(Event.mouseButton.x >= x/2.34146 && Event.mouseButton.x <= x/1.8113 && Event.mouseButton.y >= y/1.270588 && Event.mouseButton.y <= y/1.173913 ) //rep Button
                    {
                    	if(Report_button==true)
			{

				main_program_run(filesforyou,limit);
				ofstream uhm;
				string temperory=get_save_file_name();

                        if(file_exist==true)
                        {
                            recbutton4.setFillColor(Color(192,192,192));
                            recbutton3.setFillColor(Color(118,201,115));
                            recbutton1.setFillColor(Color(192,192,192));
				Report_button=false;
				reset_button=true;
				reset=false;
				uhm.open(temperory);
				uhm<<"FILE 1 , FILE 2 ,PERCENTAGE"<<endl;
					for(int a=0;a<file_taker;a++)
						{
                        	//cout<<"A : "<<final_results[a]<<endl;
						uhm<<final_results[a]<<endl;
							}
                     //   cout<<"Get Report button pressed"<<endl;
                        uhm.close();
                        file_taker=0;
                        }
			}

                    }
                    //if(Event.mouseButton.x >= x/1.324137 && Event.mouseButton.x <= x/1.177914 && Event.mouseButton.y >= y/1.270588 && Event.mouseButton.y <= y/1.1739130 ) //Details Button
                    //{
                      //  cout<<"Show Details button pressed"<<endl;


                    //}
                    if(Event.mouseButton.x >= x/1.129411 && Event.mouseButton.x <= x/1.021276 && Event.mouseButton.y >= y/1.102040 && Event.mouseButton.y <= y/1.02857 ) //Quit Button
                    {
                        window.close();
                        cout<<"Window Closed"<<endl;

                    }
                    if(Event.mouseButton.x >= x/3.2 && Event.mouseButton.x <= x/1.47692 && Event.mouseButton.y >= y/6.35294 && Event.mouseButton.y <= y/5.4 )
                    {
                        if(next_start<0)
                        {
                            next_start=0;
                        }
                        if(next_start>=limit)
                        {
                            cout<<"LIMIT REACHED! "<<endl;
                        }
                        else
                        {
                            t1[next_start].setFont(font);
                            t1[next_start].setCharacterSize(y/54);
                            t1[next_start].setString(" ");
                            t1[next_start].setStyle(Text::Bold);
                            t1[next_start].setPosition(Vector2f((x/3.14754),(y/5.2682)+text_incrementer));
                            text_incrementer+=text_difference;
                            t1[next_start].setFillColor(Color(0,0,0));
                            next_start++;
                            int next_word=20;
                            text_incrementer=0;

                            for(int var=0+next_start; var<y_fixer+next_start; var++)
                            {
                                t1[var].setFont(font2);
                                t1[var].setCharacterSize(y/54);
                                t1[var].setStyle(Text::Bold);
                                t1[var].setPosition(Vector2f((x/3.14754),(y/5.2682)+text_incrementer));
                                text_incrementer+=text_difference;
                                t1[var].setFillColor(Color(0,0,0));
                            }
                            for(int uper=0+next_start; uper<y_fixer+next_start; uper++)
                            {

                                t1[uper].setString(file_names[uper]);

                            }
                            cout<<"scroll up browse"<<endl;
                        }
                    }
                    if(Event.mouseButton.x >= x/3.2 && Event.mouseButton.x <= x/1.47692 && Event.mouseButton.y >= y/1.56521 && Event.mouseButton.y <= y/1.5 )
                    {
                        if(next_start<0)
                            {
                                next_start=0;
                            }
                        if(next_start>=limit)
                        {
                            cout<<"LIMIT REACHED! "<<endl;
                        }
                        else
                        {
                            if(next_start<0)
                            {
                                next_start=0;
                            }
                            t1[y_fixer+next_start].setFont(font);
                            t1[y_fixer+next_start].setCharacterSize(y/54);
                            t1[y_fixer+next_start].setString(" ");
                            t1[y_fixer+next_start].setStyle(Text::Bold);
                            t1[y_fixer+next_start].setPosition(Vector2f((x/3.14754),(y/5.2682)+text_incrementer));
                            text_incrementer+=text_difference;
                            t1[y_fixer+next_start].setFillColor(Color(0,0,0));
                            if(next_start>0)
                            {
                                next_start--;
                            }

                            int next_word=20;
                            text_incrementer=0;
                            for(int var=0+next_start; var<y_fixer+next_start; var++)
                            {
                                if(next_start>-1)
                                {
                                t1[var].setFont(font2);
                                t1[var].setCharacterSize(y/54);
                                t1[var].setStyle(Text::Bold);
                                t1[var].setPosition(Vector2f((x/3.14754),(y/5.2682)+text_incrementer));
                                text_incrementer+=text_difference;
                                t1[var].setFillColor(Color(0,0,0));
                                }
                            }
                            t1[y_fixer+next_start].setFont(font);
                            t1[y_fixer+next_start].setCharacterSize(y/54);
                            t1[y_fixer+next_start].setString(" ");
                            t1[y_fixer+next_start].setStyle(Text::Bold);
                            t1[y_fixer+next_start].setPosition(Vector2f((x/3.14754),(y/5.2682)+text_incrementer));
                            text_incrementer+=text_difference;
                            t1[y_fixer+next_start].setFillColor(Color(0,0,0));

                            for(int uper=0+next_start; uper<y_fixer+next_start; uper++)
                            {

                                t1[uper].setString(file_names[uper]);

                            }
                        }

                    }
                                    }

            }
        }

        window.clear();

        //We will add draw objects here
        window.draw(backg);
        window.draw(rectop);
        window.draw(t);
        //window.draw(r);
        window.draw(recleft);
        window.draw(recbottom);
        //window.draw(recright);
        window.draw(recbutton1);
        window.draw(browse);
        //window.draw(recbutton2);
        //window.draw(Compare);
        window.draw(recbutton3);
        window.draw(rst);
        window.draw(recbutton4);
        window.draw(rep);
        //window.draw(recbutton5);
        //window.draw(dtl);
        window.draw(recbutton6);
        window.draw(quit);
        window.draw(title);
        window.draw(rs1);
        window.draw(rs2);
        window.draw(s1);
        window.draw(s2);
        window.draw(version);
        window.draw(logo);
        window.draw(ins);
        window.draw(ins1);
        window.draw(ins2);
        window.draw(ins3);
        //window.draw(rs3);
        //window.draw(rs4);
        //window.draw(s3);
        //window.draw(s4);

        for(int set_string=0; set_string<limit; set_string++)
        {
            if(set_string<limit)
            {
            window.draw(t1[set_string]);

            }

        }

        window.display();
    }
}

string get_save_file_name()
{
  char filename[ MAX_PATH ];
  OPENFILENAME ofn;
    ZeroMemory( &filename, sizeof( filename ) );
    ZeroMemory( &ofn,      sizeof( ofn ) );
    ofn.lStructSize  = sizeof( ofn );
    ofn.hwndOwner    = NULL;  // If you have a window to center over, put its HANDLE here
    ofn.lpstrFilter  = "NAME OF FILE";
    ofn.lpstrFile    = filename;
    ofn.nMaxFile     = MAX_PATH;
    ofn.lpstrTitle   = "Select a Directory to Save Your Excel Report";
    ofn.Flags        = OFN_EXPLORER ;
  if (GetSaveFileName( &ofn )!=NULL)
  {
      file_exist=true;
    return strcat(filename,".csv");
    }
    else
    {
        file_exist=false;
        return "CODEANALYZER.csv";
    }

}
