#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
   vector<string> msgc {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
   
   for (const string& word : msgc)
   {
      cout << word << " ";
   }
   cout << endl;
   
}