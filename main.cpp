#include <iostream>
#include <fstream>

using namespace std;

void file()
{
    int count = 0;
   int data[48];
   ifstream file;
   file.open("racelog.txt");

   while(!file.eof()&&!file.fail())
   {
       file >> data[count];
       count++;
   }
   for (int i=0;i<=48;i++)
   {
       cout << data[i] << endl ;
   }

   file.close();

}

int main()
{
    file();
}
