#include<iostream>
#include<fstream>
#include <string> 
#include<math.h>
using namespace std;
int main()
{
    ifstream myfile;
    
    myfile.open("apple.csv");
    ofstream outfile;
    outfile.open("words.csv");
    
   
   float year=106;
    float nowdepartment=1012;
    
    int sum=0;
    string answer="";
     string answer1="";
    while(myfile.good())
    {
         string line,people,apple,banana,orange;
            float a,b;

        getline(myfile,line,',');
        getline(myfile,apple,',');
        getline(myfile,banana,',');
        getline(myfile,orange,'\n');
        a=stof(line);
        b=stof(apple);
         if(a==nowdepartment&&b==year)
        {
            sum++;

            if(sum==1)
            {
                answer+="順序一:"+banana+" ";
                answer1+="順序一:"+orange+" ";
            }
            
            else if(sum==2)
            {
                answer+="順序二:"+banana+" ";
                answer1+="順序二:"+orange+" ";
            }
            
            if(sum==3)
            {
                answer+="順序三:"+banana+" ";
                answer1+="順序三:"+orange+" ";
            }
            
            if(sum==4)
            {
                answer+="順序四:"+banana+" ";
                answer1+="順序四:"+orange+" ";
            }
            
            if(sum==5)
            {
                answer+="順序五:"+banana+" ";
                answer1+="順序五:"+orange+" ";
            }
            
        }

        else if(a==nowdepartment&&b!=year)
        {
            outfile<<nowdepartment<<","<<year<<","<<answer<<","<<answer1<<","<<endl;
            year=b;
            sum=1;
            answer="順序一:"+banana+" ";
            answer1="順序一:"+orange+" ";
        }
        else
        {
            outfile<<nowdepartment<<","<<year<<","<<answer<<","<<answer1<<","<<endl;
            nowdepartment=a;
            year=b;
            sum=1;
            answer="順序一:"+banana+" ";
            answer1="順序一:"+orange+" ";
        }
        
        

    }
     myfile.close();
     outfile.close();

} 