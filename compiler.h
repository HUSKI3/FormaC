#include <iostream>
#include <string>
#include <fstream>
#include <vector>
//#include "debug.h"

using namespace std;

int scel(string filename){
  //set states
  string state = "b";
  string finalcode = "";
  string debug = "";
  //start skeleton build
  cout << "=== Building skeleton ===\n";
  //open output file
  ofstream codefile;
  codefile.open ("tmp.cpp");
  codefile << "#include <iostream>\n#include <string>\n#include <fstream>\nusing namespace std;\n\n";
  bool ifthing = false;
  // filestream variable file 
  fstream file; 
  string word, t, q;

  // filename of the file 
  filename = filename; 
  cout << "=== Using " << filename << " as input file ===\n";
  vector<string> tokens;

  // opening file 
  file.open(filename.c_str()); 

  // extracting words from the file 
  while (file >> word) 
  { 
      // displaying content 
      //cout << word << endl; 
      tokens.push_back (word);
      if (word.find(';') != std::string::npos){
        tokens.push_back ("line-end");
      }
  } 
  for(auto & token : tokens){
    //cout << " Token: " << token << " <---- ";
    //from now on token is refered to as rev_bit cause I cant figure out how to make a normal 3D array

    // == Print ==
    if (token == "print"){
      //cout << "Print call found \n";
      codefile << "cout";
    }
    else if (token == "line-end"){
      //cout << "New line call found \n";
      codefile << "\n";
    }
    else if (token == "block.object"){
      //create a block object to store multiple variables

      //cout << "New line call found \n";
      codefile << "\nclass BlockObject{ \n int id; \n bool state; \n string data; \n public: \n void getid(){cout << BlockObject::id;};\n  void getstate(){cout << BlockObject::state;};\n  void setstate(bool x){BlockObject::state = x;};\n void setid(int x){BlockObject::id = x;};};\n";
    }
    else{
      //cout << " Not defined \n";
      codefile << token << " ";
    }
  }
  codefile.close();
  //cout << "Sent some stuff to the file";
  cout << "=== Compiling C++ ===\n";
  system("g++ -O tmp.cpp -o out.kav");
  cout << "=== Cleaning ===\n";
  system("rm -r tmp.cpp");
  cout << "=== The file can now be found as out.kav ===\n";
  return 0;
}
