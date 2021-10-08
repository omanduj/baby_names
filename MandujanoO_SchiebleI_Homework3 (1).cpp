/*
Data Analytic Application on Name Popularity -------------------------------------------------------------
Choose one of the options...
1. Ranking of the name for the year
2. Displays the names that are used for both genders
3. Display the most popular three names starting with a letter
4. Additional option
5. Exit
Enter an option number>
*/

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

int inputForRightNow;

void topByYear(int yrfrom, int yrto, string name, string gender);
void commonGender();
void mostPop();
void additionOption();
void seeVector(vector<string> vect);
int ArrayToStr(string str);

int main()
{
  cout << "Data Analytic Application on Name Popularity" << endl;
  cout << "-------------------------------------------------------------" << endl;
  cout << "Choose one of the options..." << endl;
  cout << "1. Ranking of the name for the year" << endl;
  cout << "2. Displays the names that are used for both genders" << endl;
  cout << "3. Display the most popular three names starting with a letter" << endl;
  cout << "4. Find what percent of popultation shares the same name" << endl;
  cout << "5. Exit" << endl;
  cout << "Enter an Option Number: ";
  cin >> inputForRightNow;

  switch(inputForRightNow){
    case 1:
    {
        int yrfrom, yrto;
        string name, gender;
        cout << "Enter in a Name: ";
        cin >> name;
        cout << "Enter a Gender (M/F): ";
        cin >> gender;
        cout << "Enter a Year-interval From: ";
        cin >> yrfrom;
        cout << "                        To: ";
        cin >> yrto;
        cout << endl;
        topByYear(yrfrom, yrto, name, gender);
      }
      break;
    case 2:
      commonGender();
      break;
    case 3:
      mostPop();
      break;
    case 4:
      additionOption();
      break;
    default:
      cout << "Program has Ended" << endl;
      break;
  }

  return 0;
}

void topByYear(int yrfrom, int yrto, string name, string gender)
{
  int count = yrfrom;
  int timesUsed = 0;

  switch(yrfrom){
    case 2001:
    {
      int lineNum = 0, yr = 2001; //initilize variables
      string test, newSave;
      ifstream filename("babynamesranking2001.txt");  //set varible for working with file
      if(filename.is_open()){ //checking if open
        for(string line; getline(filename, line); ) //start of finding line of needed info
        {
          if(line.find(name) != string::npos){ //if found take line
            test = line;
            if(line.find(name) != string::npos) //once first initial name is found then stop to avoid errors
              break;
          }
        }
      }

      string arr[5];  //break taken line in to simple array
      int i = 0;
      stringstream ssin(test);
      while (ssin.good() && i < 5) //loop through to divid everything into array
      {
        ssin >> arr[i];
        i++;
      }
      for(int j = 0; j < 1; j++){ //initilizes items into array variables
      }

      if(gender == "M"){ //if gender if M
        cout << yr << ": #" << arr[0] << " Rank: " << arr[2] << endl; //print out inportant infor
        string test = arr[2]; // converst const char into int to be added
        timesUsed += ArrayToStr(test); //adds simply
      } else if(gender == "F"){
        cout << yr << ": #" << arr[0] << " Rank: " << arr[4] << endl;
        string test = arr[4];
        timesUsed += ArrayToStr(test);
      } else {
        cout << "Gender Could not be Found" << endl; //if an oppsie occurs
      }

      filename.close(); //close file

      if(count == yrto) //breaks file once year is at want high amount
        break;
      count++;
    }
    case 2002:
    {
      int lineNum = 0, yr = 2002;
      string test, newSave;
      ifstream filename("babynamesranking2002.txt");
      if(filename.is_open()){
        for(string line; getline(filename, line); )
        {
          if(line.find(name) != string::npos){
            test = line;
            if(line.find(name) != string::npos)
              break;
          }
        }
      }

      string arr[5];
      int i = 0;
      stringstream ssin(test);
      while (ssin.good() && i < 5)
      {
        ssin >> arr[i];
        i++;
      }
      for(int j = 0; j < 1; j++){
      }

      if(gender == "M"){
        cout << yr << ": #" << arr[0] << " Rank: " << arr[2] << endl;
        string test = arr[2];
        timesUsed += ArrayToStr(test);
      } else if(gender == "F"){
        cout << yr << ": #" << arr[0] << " Rank: " << arr[4] << endl;
        string test = arr[4];
        timesUsed += ArrayToStr(test);
      } else {
        cout << "Name Cannot be Found" << endl;
      }

      filename.close();

      if(count == yrto)
        break;
      count++;
    }
    case 2003:
    {
      int lineNum = 0, yr = 2003;
      string test, newSave;
      ifstream filename("babynamesranking2003.txt");
      if(filename.is_open()){
        for(string line; getline(filename, line); )
        {
          if(line.find(name) != string::npos){
            test = line;
            if(line.find(name) != string::npos)
              break;
          }
        }
      }

      string arr[5];
      int i = 0;
      stringstream ssin(test);
      while (ssin.good() && i < 5)
      {
        ssin >> arr[i];
        i++;
      }
      for(int j = 0; j < 1; j++){
      }

      if(gender == "M"){
        cout << yr << ": #" << arr[0] << " Rank: " << arr[2] << endl;
        string test = arr[2];
        timesUsed += ArrayToStr(test);
      } else if(gender == "F"){
        cout << yr << ": #" << arr[0] << " Rank: " << arr[4] << endl;
        string test = arr[4];
        timesUsed += ArrayToStr(test);
      } else {
        cout << "Name Cannot be Found" << endl;
      }

      filename.close();

      if(count == yrto)
        break;
      count++;
    }
    case 2004:
    {
      int lineNum = 0, yr = 2004;
      string test, newSave;
      ifstream filename("babynamesranking2004.txt");
      if(filename.is_open()){
        for(string line; getline(filename, line); )
        {
          if(line.find(name) != string::npos){
            test = line;
            if(line.find(name) != string::npos)
              break;
          }
        }
      }

      string arr[5];
      int i = 0;
      stringstream ssin(test);
      while (ssin.good() && i < 5)
      {
        ssin >> arr[i];
        i++;
      }
      for(int j = 0; j < 1; j++){
      }

      if(gender == "M"){
        cout << yr << ": #" << arr[0] << " Rank: " << arr[2] << endl;
        string test = arr[2];
        timesUsed += ArrayToStr(test);
      } else if(gender == "F"){
        cout << yr << ": #" << arr[0] << " Rank: " << arr[4] << endl;
        string test = arr[4];
        timesUsed += ArrayToStr(test);
      } else {
        cout << "Name Cannot be Found" << endl;
      }

      filename.close();

      if(count == yrto)
        break;
      count++;
    }
    case 2005:
    {
      int lineNum = 0, yr = 2005;
      string test, newSave;
      ifstream filename("babynamesranking2005.txt");
      if(filename.is_open()){
        for(string line; getline(filename, line); )
        {
          if(line.find(name) != string::npos){
            test = line;
            if(line.find(name) != string::npos)
              break;
          }
        }
      }

      string arr[5];
      int i = 0;
      stringstream ssin(test);
      while (ssin.good() && i < 5)
      {
        ssin >> arr[i];
        i++;
      }
      for(int j = 0; j < 1; j++){
      }

      if(gender == "M"){
        cout << yr << ": #" << arr[0] << " Rank: " << arr[2] << endl;
        string test = arr[2];
        timesUsed += ArrayToStr(test);
      } else if(gender == "F"){
        cout << yr << ": #" << arr[0] << " Rank: " << arr[4] << endl;
        string test = arr[4];
        timesUsed += ArrayToStr(test);
      } else {
        cout << "Name Cannot be Found" << endl;
      }

      filename.close();

      if(count == yrto)
        break;
      count++;
    }
    case 2006:
    {
      int lineNum = 0, yr = 2006;
      string test, newSave;
      ifstream filename("babynamesranking2006.txt");
      if(filename.is_open()){
        for(string line; getline(filename, line); )
        {
          if(line.find(name) != string::npos){
            test = line;
            if(line.find(name) != string::npos)
              break;
          }
        }
      }

      string arr[5];
      int i = 0;
      stringstream ssin(test);
      while (ssin.good() && i < 5)
      {
        ssin >> arr[i];
        i++;
      }
      for(int j = 0; j < 1; j++){
      }

      if(gender == "M"){
        cout << yr << ": #" << arr[0] << " Rank: " << arr[2] << endl;
        string test = arr[2];
        timesUsed += ArrayToStr(test);
      } else if(gender == "F"){
        cout << yr << ": #" << arr[0] << " Rank: " << arr[4] << endl;
        string test = arr[4];
        timesUsed += ArrayToStr(test);
      } else {
        cout << "Name Cannot be Found" << endl;
      }

      filename.close();

      if(count == yrto)
        break;
      count++;
    }
    case 2007:
    {
      int lineNum = 0, yr = 2007;
      string test, newSave;
      ifstream filename("babynamesranking2007.txt");
      if(filename.is_open()){
        for(string line; getline(filename, line); )
        {
          if(line.find(name) != string::npos){
            test = line;
            if(line.find(name) != string::npos)
              break;
          }
        }
      }

      string arr[5];
      int i = 0;
      stringstream ssin(test);
      while (ssin.good() && i < 5)
      {
        ssin >> arr[i];
        i++;
      }
      for(int j = 0; j < 1; j++){
      }

      if(gender == "M"){
        cout << yr << ": #" << arr[0] << " Rank: " << arr[2] << endl;
        string test = arr[2];
        timesUsed += ArrayToStr(test);
      } else if(gender == "F"){
        cout << yr << ": #" << arr[0] << " Rank: " << arr[4] << endl;
        string test = arr[4];
        timesUsed += ArrayToStr(test);
      } else {
        cout << "Name Cannot be Found" << endl;
      }

      filename.close();

      if(count == yrto)
        break;
      count++;
    }
    case 2008:
    {
      int lineNum = 0, yr = 2008;
      string test, newSave;
      ifstream filename("babynamesranking2008.txt");
      if(filename.is_open()){
        for(string line; getline(filename, line); )
        {
          if(line.find(name) != string::npos){
            test = line;
            if(line.find(name) != string::npos)
              break;
          }
        }
      }

      string arr[5];
      int i = 0;
      stringstream ssin(test);
      while (ssin.good() && i < 5)
      {
        ssin >> arr[i];
        i++;
      }
      for(int j = 0; j < 1; j++){
      }

      if(gender == "M"){
        cout << yr << ": #" << arr[0] << " Rank: " << arr[2] << endl;
        string test = arr[2];
        timesUsed += ArrayToStr(test);
      } else if(gender == "F"){
        cout << yr << ": #" << arr[0] << " Rank: " << arr[4] << endl;
        string test = arr[4];
        timesUsed += ArrayToStr(test);
      } else {
        cout << "Name Cannot be Found" << endl;
      }

      filename.close();

      if(count == yrto)
        break;
      count++;
    }
    case 2009:
    {
      int lineNum = 0, yr = 2009;
      string test, newSave;
      ifstream filename("babynamesranking2009.txt");
      if(filename.is_open()){
        for(string line; getline(filename, line); )
        {
          if(line.find(name) != string::npos){
            test = line;
            if(line.find(name) != string::npos)
              break;
          }
        }
      }

      string arr[5];
      int i = 0;
      stringstream ssin(test);
      while (ssin.good() && i < 5)
      {
        ssin >> arr[i];
        i++;
      }
      for(int j = 0; j < 1; j++){
      }

      if(gender == "M"){
        cout << yr << ": #" << arr[0] << " Rank: " << arr[2] << endl;
        string test = arr[2];
        timesUsed += ArrayToStr(test);
      } else if(gender == "F"){
        cout << yr << ": #" << arr[0] << " Rank: " << arr[4] << endl;
        string test = arr[4];
        timesUsed += ArrayToStr(test);
      } else {
        cout << "Name Cannot be Found" << endl;
      }

      filename.close();

      if(count == yrto)
        break;
      count++;
    }
    case 2010:
    {
      int lineNum = 0, yr = 2010;
      string test, newSave;
      ifstream filename("babynamesranking2010.txt");
      if(filename.is_open()){
        for(string line; getline(filename, line); )
        {
          if(line.find(name) != string::npos){
            test = line;
            if(line.find(name) != string::npos)
              break;
          }
        }
      }

      string arr[5];
      int i = 0;
      stringstream ssin(test);
      while (ssin.good() && i < 5)
      {
        ssin >> arr[i];
        i++;
      }
      for(int j = 0; j < 1; j++){
      }

      if(gender == "M"){
        cout << yr << ": #" << arr[0] << " Rank: " << arr[2] << endl;
        string test = arr[2];
        timesUsed += ArrayToStr(test);
      } else if(gender == "F"){
        cout << yr << ": #" << arr[0] << " Rank: " << arr[4] << endl;
        string test = arr[4];
        timesUsed += ArrayToStr(test);
      } else {
        cout << "Name Cannot be Found" << endl;
      }

      filename.close();

      if(count == yrto)
        break;
      count++;
    }
    default:
      cout << "Year can not be Found" << endl;
      cout << "Please use Years from 2001-2010" << endl;
      break;
    }
  cout << "Times Used over Time: " << timesUsed << endl;
  cout << endl;
  main();
}

void commonGender()    //DONEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE
/*
  Purpose: To find the names that have the common gender in a user inputed given year
  Parameters: Year and commonNames
  Return value: None
  Description: It uses user input in order to choose which switch case it goes to, the default being error. Every year has a switch case which executes the code for a given year.
               The code within each year is the same except for the file it takes in. Within each switch statement, we open the file and make the variable name line into a string.
               Then we use the ifstream to open up the file, we then make three vectors in order to conatin the data from one set of male names, the other the female  names, and another the common names shared.
               We open the file and then create the string maleName and femaleName and declare rank, maleNumber and femaleNumber inegers. While there still exsists a file input, for every line
               It saves the first block of text into rank, the next to maleName etc (can think of it as columns). It then takes the names from the maleName and saves them to vector maleNames and
               femaleName to the vector femaleNames. Then for every single object in those vectors, it compares it to the other, and if they have similar names, it adds it to the commonNames vector amd print it out.

*/
{
  int year;
  cout << "Enter a year for finding common gender names: ";                     //Takes in user input and stores it as integer year
  cin >> year;
  int totalNames = 0;

  switch(year)
  {

  case 2001:

    {
      string line;                                                              //creates string called line
      ifstream myfile;                                                          //Creates ifstream to read in data
      vector <string> maleNames;                                                //Next three lines creates vectors to contain there respective information
      vector <string> femaleNames;
      vector <string> commonNames;

      myfile.open("babynamesranking2001.txt");                                  //Open

      string maleName, femaleName;
      int rank, maleNumber, femaleNumber;
      while (!myfile.eof())

      {
        myfile >> rank >> maleName >> maleNumber >> femaleName >> femaleNumber; //Takes myfile (which is the text, and takes the first block of text and saves it into rank and so on)
        maleNames.push_back(maleName);
        femaleNames.push_back(femaleName);
      }

      for(int count = 0; count < maleNames.size(); count++)
      {
          for (int count2 = 0; count2 < femaleNames.size(); count2++)
          {
            if (maleNames[count] == femaleNames[count2])
            {
              commonNames.push_back(maleNames[count]);
            }
          }
      }
      for( int count3 = 0; count3 < commonNames.size(); count3++)
	{
	  totalNames++;
	}
      cout << totalNames << " names are used for both boys and girls: " << endl;
      seeVector(commonNames);
      myfile.close();

    break;
  }
  case 2002:

      {
        string line;
        ifstream myfile;
        vector <string> maleNames;
        vector <string> femaleNames;
        vector <string> commonNames;

        myfile.open("babynamesranking2002.txt");

        string maleName, femaleName;
        int rank, maleNumber, femaleNumber;
        while (!myfile.eof())
        {
          myfile >> rank >> maleName >> maleNumber >> femaleName >> femaleNumber;
          maleNames.push_back(maleName);
          femaleNames.push_back(femaleName);
        }

        for(int count = 0; count < maleNames.size(); count++)
        {
            for (int count2 = 0; count2 < femaleNames.size(); count2++)
            {
              if (maleNames[count] == femaleNames[count2])
              {
                commonNames.push_back(maleNames[count]);
              }
            }
        }
 	for( int count3 = 0; count3 < commonNames.size(); count3++)
	{
	  totalNames++;
	}
      cout << totalNames << " names are used for both boys and girls: " << endl;
      seeVector(commonNames);
      myfile.close();

    break;
  }
  case 2003:

      {
        string line;
        ifstream myfile;
        vector <string> maleNames;
        vector <string> femaleNames;
        vector <string> commonNames;

        myfile.open("babynamesranking2003.txt");

        string maleName, femaleName;
        int rank, maleNumber, femaleNumber;
        while (!myfile.eof())
        {
          myfile >> rank >> maleName >> maleNumber >> femaleName >> femaleNumber;
          maleNames.push_back(maleName);
          femaleNames.push_back(femaleName);
        }

        for(int count = 0; count < maleNames.size(); count++)
        {
            for (int count2 = 0; count2 < femaleNames.size(); count2++)
            {
              if (maleNames[count] == femaleNames[count2])
              {
                commonNames.push_back(maleNames[count]);
              }
            }
        }
 	for( int count3 = 0; count3 < commonNames.size(); count3++)
	{
	  totalNames++;
	}
      cout << totalNames << " names are used for both boys and girls: " << endl;
      seeVector(commonNames);
      myfile.close();

    	break;
 	 }
  case 2004:

      {
        string line;
        ifstream myfile;
        vector <string> maleNames;
        vector <string> femaleNames;
        vector <string> commonNames;

        myfile.open("babynamesranking2004.txt");

        string maleName, femaleName;
        int rank, maleNumber, femaleNumber;
        while (!myfile.eof())
        {
          myfile >> rank >> maleName >> maleNumber >> femaleName >> femaleNumber;
          maleNames.push_back(maleName);
          femaleNames.push_back(femaleName);
        }

        for(int count = 0; count < maleNames.size(); count++)
        {
            for (int count2 = 0; count2 < femaleNames.size(); count2++)
            {
              if (maleNames[count] == femaleNames[count2])
              {
                commonNames.push_back(maleNames[count]);
              }
            }
        }
 	for( int count3 = 0; count3 < commonNames.size(); count3++)
	{
	  totalNames++;
	 }
	      cout << totalNames << " names are used for both boys and girls: " << endl;
	      seeVector(commonNames);
	      myfile.close();

	    break;
	  }
  case 2005:

      {
        string line;
        ifstream myfile;
        vector <string> maleNames;
        vector <string> femaleNames;
        vector <string> commonNames;

        myfile.open("babynamesranking2005.txt");

        string maleName, femaleName;
        int rank, maleNumber, femaleNumber;
        while (!myfile.eof())
        {
          myfile >> rank >> maleName >> maleNumber >> femaleName >> femaleNumber;
          maleNames.push_back(maleName);
          femaleNames.push_back(femaleName);
        }

        for(int count = 0; count < maleNames.size(); count++)
        {
            for (int count2 = 0; count2 < femaleNames.size(); count2++)
            {
              if (maleNames[count] == femaleNames[count2])
              {
                commonNames.push_back(maleNames[count]);
              }
            }
        }
 	for( int count3 = 0; count3 < commonNames.size(); count3++)
	{
	  totalNames++;
	}
	      cout << totalNames << " names are used for both boys and girls: " << endl;
	      seeVector(commonNames);
	      myfile.close();

	    break;
	  }
  case 2006:

      {
        string line;
        ifstream myfile;
        vector <string> maleNames;
        vector <string> femaleNames;
        vector <string> commonNames;

        myfile.open("babynamesranking2006.txt");

        string maleName, femaleName;
        int rank, maleNumber, femaleNumber;
        while (!myfile.eof())
        {
          myfile >> rank >> maleName >> maleNumber >> femaleName >> femaleNumber;
          maleNames.push_back(maleName);
          femaleNames.push_back(femaleName);
        }

        for(int count = 0; count < maleNames.size(); count++)
        {
            for (int count2 = 0; count2 < femaleNames.size(); count2++)
            {
              if (maleNames[count] == femaleNames[count2])
              {
                commonNames.push_back(maleNames[count]);
              }
            }
        }
         for( int count3 = 0; count3 < commonNames.size(); count3++)
	{
	  totalNames++;
	}
      cout << totalNames << " names are used for both boys and girls: " << endl;
      seeVector(commonNames);
      myfile.close();

   	 break;
  	}
  case 2007:

      {
        string line;
        ifstream myfile;
        vector <string> maleNames;
        vector <string> femaleNames;
        vector <string> commonNames;

        myfile.open("babynamesranking2007.txt");

        string maleName, femaleName;
        int rank, maleNumber, femaleNumber;
        while (!myfile.eof())
        {
          myfile >> rank >> maleName >> maleNumber >> femaleName >> femaleNumber;
          maleNames.push_back(maleName);
          femaleNames.push_back(femaleName);
        }

        for(int count = 0; count < maleNames.size(); count++)
        {
            for (int count2 = 0; count2 < femaleNames.size(); count2++)
            {
              if (maleNames[count] == femaleNames[count2])
              {
                commonNames.push_back(maleNames[count]);
              }
            }
        }
     for( int count3 = 0; count3 < commonNames.size(); count3++)
	{
	  totalNames++;
	}
      cout << totalNames << " names are used for both boys and girls: " << endl;
      seeVector(commonNames);
      myfile.close();

    break;
  }
  case 2008:

      {
        string line;
        ifstream myfile;
        vector <string> maleNames;
        vector <string> femaleNames;
        vector <string> commonNames;

        myfile.open("babynamesranking2008.txt");

        string maleName, femaleName;
        int rank, maleNumber, femaleNumber;
        while (!myfile.eof())
        {
          myfile >> rank >> maleName >> maleNumber >> femaleName >> femaleNumber;
          maleNames.push_back(maleName);
          femaleNames.push_back(femaleName);
        }

        for(int count = 0; count < maleNames.size(); count++)
        {
            for (int count2 = 0; count2 < femaleNames.size(); count2++)
            {
              if (maleNames[count] == femaleNames[count2])
              {
                commonNames.push_back(maleNames[count]);
              }
            }
        }
    for( int count3 = 0; count3 < commonNames.size(); count3++)
	{
	  totalNames++;
	}
      cout << totalNames << " names are used for both boys and girls: " << endl;
      seeVector(commonNames);
      myfile.close();

    break;
  }
  case 2009:

      {
        string line;
        ifstream myfile;
        vector <string> maleNames;
        vector <string> femaleNames;
        vector <string> commonNames;

        myfile.open("babynamesranking2009.txt");

        string maleName, femaleName;
        int rank, maleNumber, femaleNumber;
        while (!myfile.eof())
        {
          myfile >> rank >> maleName >> maleNumber >> femaleName >> femaleNumber;
          maleNames.push_back(maleName);
          femaleNames.push_back(femaleName);
        }

        for(int count = 0; count < maleNames.size(); count++)
        {
            for (int count2 = 0; count2 < femaleNames.size(); count2++)
            {
              if (maleNames[count] == femaleNames[count2])
              {
                commonNames.push_back(maleNames[count]);
              }
            }
        }
  	for( int count3 = 0; count3 < commonNames.size(); count3++)
	{
	  totalNames++;
	}
      cout << totalNames << " names are used for both boys and girls: " << endl;
      seeVector(commonNames);
      myfile.close();

    break;
  }
  case 2010:
      {
        string line;
        ifstream myfile;
        vector <string> maleNames;
        vector <string> femaleNames;
        vector <string> commonNames;

        myfile.open("babynamesranking2010.txt");

        string maleName, femaleName;
        int rank, maleNumber, femaleNumber;
        while (!myfile.eof())
        {
          myfile >> rank >> maleName >> maleNumber >> femaleName >> femaleNumber;
          maleNames.push_back(maleName);
          femaleNames.push_back(femaleName);
        }

        for(int count = 0; count < maleNames.size(); count++)
        {
            for (int count2 = 0; count2 < femaleNames.size(); count2++)
            {
              if (maleNames[count] == femaleNames[count2])
              {
                commonNames.push_back(maleNames[count]);
              }
            }
        }
 	 for( int count3 = 0; count3 < commonNames.size(); count3++)
	{
	  totalNames++;
	}
      cout << totalNames << " names are used for both boys and girls: " << endl;
      seeVector(commonNames);
      myfile.close();

    break;
  }
  default:
    cout << "error" << endl;;

  }
  main();
}

void mostPop()        //DONEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE
/*
  Purpose: To find the top three popular girls and guys names for a unser inputed year and a user inputed letter.
  Parameters: None
  Return value: None
  Description: We create 6 vectors, one to get maleNames, which will be used to look for the the top male names starting with the given letter. Then the exact same process for femaleNames vector.
                We we use the third and fourth vector to aggregate the numbers which correspond to the male and female names. We create a vector with the names we want printed, and then initilize a count
                in order to help with formatting the output. We then open the file and obtain the columns and add the needed info to each vector repectivily. Then we iterate through the male vector searching
                the instances that use the letter inputed and add that to there respective vectors. We do the same thing for female names. Lasty we iterate through the vector with the information we
                need, formatting the output as needed.
*/
{
  int year;
  char letter;
  cout << "Enter a capital letter to see the most popular three names starting with: ";
  cin >> letter;                                                                                //Obtains letter to search for
  cout << "Enter a year: ";
  cin >> year;                                                                                  //Obtains the year it will be searched for
  cout << endl;

  switch(year)
  {
    case 2001:
          {
            string line;
            ifstream myFile;
            vector <string> maleNames;
            vector <string> femaleNames;
            vector <int> maNumber;
            vector<int> feNumber;
            vector <string> toBePrintedMale;
            vector <string> toBePrintedFemale;
            int count = 1;
            int count2 = 1;

            myFile.open("babynamesranking2001.txt");

            string maleName, femaleName;
            int rank, maleNumber, femaleNumber;
            while (!myFile.eof())
            {
              myFile >> rank >> maleName >> maleNumber >> femaleName >> femaleNumber;               //Takes myfile (which is the text, and takes the first block of text and saves it into rank and so on)

              maleNames.push_back(maleName);                                                        //Pushes back the desired elements into the vector maleName (to get male names)
              maNumber.push_back(maleNumber);                                                       //Pushes back the desired elements into the vector maNumber (to get numbers for males)

              femaleNames.push_back(femaleName);                                                    //Pushes back the desired elements into the vector femaleName (to get female names)
              feNumber.push_back(femaleNumber);                                                     //Pushes back the desired elements into the vector maleName (to get numbers for females)
            }

            for (int i = 0; i < maleNames.size(); i++)                                              //Iterates through the size of the vector
            {
              if(maleNames[i][0] == letter)                                                         //If the name at i (the whole name) at position 0 (the first letter) corresponds to the letter inputed, push it back to the to be printed vector
                {
                  toBePrintedMale.push_back(maleNames[i]);
                }
            }

            cout << "Girls:" << endl;
            for (int i = 0; i < femaleNames.size(); i++)                                              //If the name at i (the whole name) at position 0 (the first letter) corresponds to the letter inputed, push it back to the to be printed vector
            {
              if(femaleNames[i][0] == letter)
                {
                  toBePrintedFemale.push_back(femaleNames[i]);
                }
            }

            for (int i = 0; i <= 2; i++)                                                              //While i is less than or equal to 2 (which is to include only the to three names), it will print out the desired name with the ranking it is (whether it is 1,2 or 3)
            {

              cout << "#" << count2 << " " << toBePrintedFemale[i] << endl;
              count2++;
            }

            cout << endl << "Boys:" << endl;
            for (int i = 0; i <= 2; i++)                                                             //While i is less than or equal to 2 (which is to include only the to three names), it will print out the desired name with the ranking it is (whether it is 1,2 or 3)
            {

              cout << "#" << count << " " << toBePrintedMale[i] << endl;
              count++;
            }
            myFile.close();                                                                         //Closes file
            break;
          }
    case 2002:
    {
      string line;
      ifstream myFile;
      vector <string> maleNames;
      vector <string> femaleNames;
      vector <int> maNumber;
      vector<int> feNumber;
      vector <string> toBePrintedMale;
      vector <string> toBePrintedFemale;
      int count = 1;
      int count2 = 1;

      myFile.open("babynamesranking2002.txt");

      string maleName, femaleName;
      int rank, maleNumber, femaleNumber;
      while (!myFile.eof())
      {
        myFile >> rank >> maleName >> maleNumber >> femaleName >> femaleNumber;

        maleNames.push_back(maleName);
        maNumber.push_back(maleNumber);

        femaleNames.push_back(femaleName);
        feNumber.push_back(femaleNumber);
      }
      myFile.close();                                                                         //Closes file
      for (int i = 0; i < maleNames.size(); i++)
      {
        if(maleNames[i][0] == letter)
          {
            toBePrintedMale.push_back(maleNames[i]);
          }
      }

      cout << "Girls:" << endl;
      for (int i = 0; i < femaleNames.size(); i++)
      {
        if(femaleNames[i][0] == letter)
          {
            toBePrintedFemale.push_back(femaleNames[i]);
          }
      }
      myFile.close();                                                                         //Closes file
      for (int i = 0; i <= 2; i++)
      {

        cout << "#" << count2 << " " << toBePrintedFemale[i] << endl;
        count2++;
      }

      cout << endl << "Boys:" << endl;
      for (int i = 0; i <= 2; i++)
      {

        cout << "#" << count << " " << toBePrintedMale[i] << endl;
        count++;
      }
      myFile.close();
      break;
    }
    case 2003:
    {
      string line;
      ifstream myFile;
      vector <string> maleNames;
      vector <string> femaleNames;
      vector <int> maNumber;
      vector<int> feNumber;
      vector <string> toBePrintedMale;
      vector <string> toBePrintedFemale;
      int count = 1;
      int count2 = 1;

      myFile.open("babynamesranking2003.txt");

      string maleName, femaleName;
      int rank, maleNumber, femaleNumber;
      while (!myFile.eof())
      {
        myFile >> rank >> maleName >> maleNumber >> femaleName >> femaleNumber;

        maleNames.push_back(maleName);
        maNumber.push_back(maleNumber);

        femaleNames.push_back(femaleName);
        feNumber.push_back(femaleNumber);
      }

      for (int i = 0; i < maleNames.size(); i++)
      {
        if(maleNames[i][0] == letter)
          {
            toBePrintedMale.push_back(maleNames[i]);
          }
      }

      cout << "Girls:" << endl;
      for (int i = 0; i < femaleNames.size(); i++)
      {
        if(femaleNames[i][0] == letter)
          {
            toBePrintedFemale.push_back(femaleNames[i]);
          }
      }

      for (int i = 0; i <= 2; i++)
      {

        cout << "#" << count2 << " " << toBePrintedFemale[i] << endl;
        count2++;
      }

      cout << endl << "Boys:" << endl;
      for (int i = 0; i <= 2; i++)
      {

        cout << "#" << count << " " << toBePrintedMale[i] << endl;
        count++;
      }
      myFile.close();
      break;
    }
    case 2004:
    {
      string line;
      ifstream myFile;
      vector <string> maleNames;
      vector <string> femaleNames;
      vector <int> maNumber;
      vector<int> feNumber;
      vector <string> toBePrintedMale;
      vector <string> toBePrintedFemale;
      int count = 1;
      int count2 = 1;

      myFile.open("babynamesranking2004.txt");

      string maleName, femaleName;
      int rank, maleNumber, femaleNumber;
      while (!myFile.eof())
      {
        myFile >> rank >> maleName >> maleNumber >> femaleName >> femaleNumber;

        maleNames.push_back(maleName);
        maNumber.push_back(maleNumber);

        femaleNames.push_back(femaleName);
        feNumber.push_back(femaleNumber);
      }

      for (int i = 0; i < maleNames.size(); i++)
      {
        if(maleNames[i][0] == letter)
          {
            toBePrintedMale.push_back(maleNames[i]);
          }
      }

      cout << "Girls:" << endl;
      for (int i = 0; i < femaleNames.size(); i++)
      {
        if(femaleNames[i][0] == letter)
          {
            toBePrintedFemale.push_back(femaleNames[i]);
          }
      }

      for (int i = 0; i <= 2; i++)
      {

        cout << "#" << count2 << " " << toBePrintedFemale[i] << endl;
        count2++;
      }

      cout << endl << "Boys:" << endl;
      for (int i = 0; i <= 2; i++)
      {

        cout << "#" << count << " " << toBePrintedMale[i] << endl;
        count++;
      }
      myFile.close();
      break;
    }
    case 2005:
    {
      string line;
      ifstream myFile;
      vector <string> maleNames;
      vector <string> femaleNames;
      vector <int> maNumber;
      vector<int> feNumber;
      vector <string> toBePrintedMale;
      vector <string> toBePrintedFemale;
      int count = 1;
      int count2 = 1;

      myFile.open("babynamesranking2005.txt");

      string maleName, femaleName;
      int rank, maleNumber, femaleNumber;
      while (!myFile.eof())
      {
        myFile >> rank >> maleName >> maleNumber >> femaleName >> femaleNumber;

        maleNames.push_back(maleName);
        maNumber.push_back(maleNumber);

        femaleNames.push_back(femaleName);
        feNumber.push_back(femaleNumber);
      }

      for (int i = 0; i < maleNames.size(); i++)
      {
        if(maleNames[i][0] == letter)
          {
            toBePrintedMale.push_back(maleNames[i]);
          }
      }

      cout << "Girls:" << endl;
      for (int i = 0; i < femaleNames.size(); i++)
      {
        if(femaleNames[i][0] == letter)
          {
            toBePrintedFemale.push_back(femaleNames[i]);
          }
      }

      for (int i = 0; i <= 2; i++)
      {

        cout << "#" << count2 << " " << toBePrintedFemale[i] << endl;
        count2++;
      }

      cout << endl << "Boys:" << endl;
      for (int i = 0; i <= 2; i++)
      {

        cout << "#" << count << " " << toBePrintedMale[i] << endl;
        count++;
      }
      myFile.close();
      break;
    }
    case 2006:
    {
      string line;
      ifstream myFile;
      vector <string> maleNames;
      vector <string> femaleNames;
      vector <int> maNumber;
      vector<int> feNumber;
      vector <string> toBePrintedMale;
      vector <string> toBePrintedFemale;
      int count = 1;
      int count2 = 1;

      myFile.open("babynamesranking2006.txt");

      string maleName, femaleName;
      int rank, maleNumber, femaleNumber;
      while (!myFile.eof())
      {
        myFile >> rank >> maleName >> maleNumber >> femaleName >> femaleNumber;

        maleNames.push_back(maleName);
        maNumber.push_back(maleNumber);

        femaleNames.push_back(femaleName);
        feNumber.push_back(femaleNumber);
      }

      for (int i = 0; i < maleNames.size(); i++)
      {
        if(maleNames[i][0] == letter)
          {
            toBePrintedMale.push_back(maleNames[i]);
          }
      }

      cout << "Girls:" << endl;
      for (int i = 0; i < femaleNames.size(); i++)
      {
        if(femaleNames[i][0] == letter)
          {
            toBePrintedFemale.push_back(femaleNames[i]);
          }
      }

      for (int i = 0; i <= 2; i++)
      {

        cout << "#" << count2 << " " << toBePrintedFemale[i] << endl;
        count2++;
      }

      cout << endl << "Boys:" << endl;
      for (int i = 0; i <= 2; i++)
      {

        cout << "#" << count << " " << toBePrintedMale[i] << endl;
        count++;
      }
      myFile.close();
      break;
    }
    case 2007:
    {
      string line;
      ifstream myFile;
      vector <string> maleNames;
      vector <string> femaleNames;
      vector <int> maNumber;
      vector<int> feNumber;
      vector <string> toBePrintedMale;
      vector <string> toBePrintedFemale;
      int count = 1;
      int count2 = 1;

      myFile.open("babynamesranking2007.txt");

      string maleName, femaleName;
      int rank, maleNumber, femaleNumber;
      while (!myFile.eof())
      {
        myFile >> rank >> maleName >> maleNumber >> femaleName >> femaleNumber;

        maleNames.push_back(maleName);
        maNumber.push_back(maleNumber);

        femaleNames.push_back(femaleName);
        feNumber.push_back(femaleNumber);
      }

      for (int i = 0; i < maleNames.size(); i++)
      {
        if(maleNames[i][0] == letter)
          {
            toBePrintedMale.push_back(maleNames[i]);
          }
      }

      cout << "Girls:" << endl;
      for (int i = 0; i < femaleNames.size(); i++)
      {
        if(femaleNames[i][0] == letter)
          {
            toBePrintedFemale.push_back(femaleNames[i]);
          }
      }

      for (int i = 0; i <= 2; i++)
      {

        cout << "#" << count2 << " " << toBePrintedFemale[i] << endl;
        count2++;
      }

      cout << endl << "Boys:" << endl;
      for (int i = 0; i <= 2; i++)
      {

        cout << "#" << count << " " << toBePrintedMale[i] << endl;
        count++;
      }
      myFile.close();
      break;
    }
    case 2008:
    {
      string line;
      ifstream myFile;
      vector <string> maleNames;
      vector <string> femaleNames;
      vector <int> maNumber;
      vector<int> feNumber;
      vector <string> toBePrintedMale;
      vector <string> toBePrintedFemale;
      int count = 1;
      int count2 = 1;

      myFile.open("babynamesranking2008.txt");

      string maleName, femaleName;
      int rank, maleNumber, femaleNumber;
      while (!myFile.eof())
      {
        myFile >> rank >> maleName >> maleNumber >> femaleName >> femaleNumber;

        maleNames.push_back(maleName);
        maNumber.push_back(maleNumber);

        femaleNames.push_back(femaleName);
        feNumber.push_back(femaleNumber);
      }

      for (int i = 0; i < maleNames.size(); i++)
      {
        if(maleNames[i][0] == letter)
          {
            toBePrintedMale.push_back(maleNames[i]);
          }
      }

      cout << "Girls:" << endl;
      for (int i = 0; i < femaleNames.size(); i++)
      {
        if(femaleNames[i][0] == letter)
          {
            toBePrintedFemale.push_back(femaleNames[i]);
          }
      }

      for (int i = 0; i <= 2; i++)
      {

        cout << "#" << count2 << " " << toBePrintedFemale[i] << endl;
        count2++;
      }

      cout << endl << "Boys:" << endl;
      for (int i = 0; i <= 2; i++)
      {

        cout << "#" << count << " " << toBePrintedMale[i] << endl;
        count++;
      }
      myFile.close();
      break;
    }
    case 2009:
    {
      string line;
      ifstream myFile;
      vector <string> maleNames;
      vector <string> femaleNames;
      vector <int> maNumber;
      vector<int> feNumber;
      vector <string> toBePrintedMale;
      vector <string> toBePrintedFemale;
      int count = 1;
      int count2 = 1;

      myFile.open("babynamesranking2009.txt");

      string maleName, femaleName;
      int rank, maleNumber, femaleNumber;
      while (!myFile.eof())
      {
        myFile >> rank >> maleName >> maleNumber >> femaleName >> femaleNumber;

        maleNames.push_back(maleName);
        maNumber.push_back(maleNumber);

        femaleNames.push_back(femaleName);
        feNumber.push_back(femaleNumber);
      }

      for (int i = 0; i < maleNames.size(); i++)
      {
        if(maleNames[i][0] == letter)
          {
            toBePrintedMale.push_back(maleNames[i]);
          }
      }

      cout << "Girls:" << endl;
      for (int i = 0; i < femaleNames.size(); i++)
      {
        if(femaleNames[i][0] == letter)
          {
            toBePrintedFemale.push_back(femaleNames[i]);
          }
      }

      for (int i = 0; i <= 2; i++)
      {

        cout << "#" << count2 << " " << toBePrintedFemale[i] << endl;
        count2++;
      }

      cout << endl << "Boys:" << endl;
      for (int i = 0; i <= 2; i++)
      {

        cout << "#" << count << " " << toBePrintedMale[i] << endl;
        count++;
      }
      myFile.close();
      break;
    }
    case 2010:
    {
      string line;
      ifstream myFile;
      vector <string> maleNames;
      vector <string> femaleNames;
      vector <int> maNumber;
      vector<int> feNumber;
      vector <string> toBePrintedMale;
      vector <string> toBePrintedFemale;
      int count = 1;
      int count2 = 1;

      myFile.open("babynamesranking2010.txt");

      string maleName, femaleName;
      int rank, maleNumber, femaleNumber;
      while (!myFile.eof())
      {
        myFile >> rank >> maleName >> maleNumber >> femaleName >> femaleNumber;

        maleNames.push_back(maleName);
        maNumber.push_back(maleNumber);

        femaleNames.push_back(femaleName);
        feNumber.push_back(femaleNumber);
      }

      for (int i = 0; i < maleNames.size(); i++)
      {
        if(maleNames[i][0] == letter)
          {
            toBePrintedMale.push_back(maleNames[i]);
          }
      }

      cout << "Girls:" << endl;
      for (int i = 0; i < femaleNames.size(); i++)
      {
        if(femaleNames[i][0] == letter)
          {
            toBePrintedFemale.push_back(femaleNames[i]);
          }
      }

      for (int i = 0; i <= 2; i++)
      {

        cout << "#" << count2 << " " << toBePrintedFemale[i] << endl;
        count2++;
      }

      cout << endl << "Boys:" << endl;
      for (int i = 0; i <= 2; i++)
      {

        cout << "#" << count << " " << toBePrintedMale[i] << endl;
        count++;
      }
      myFile.close();
      break;
    }
    default:
        cout << "error" << endl;
  }
main();
}

void additionOption() //DONEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE
{
  /*
    Purpose: To find the percent amount of people that share the inputed name
    Parameters: None
    Return value: None
    Description: We create vectors to collect all the data we need, then we open the file and push_back all the information we need from a given file.
                  Next We obtain the correlating number to the given name, and then add up all occurances of all names. After that, we then calculate the percentage
                  of the name via taking the variable that holds the amount divided by the sum total of all the names. We then divide the amount a given name occurs by the total name
                  (stored in sum) and multiply the result by 100 to get the percentage the name occurs.
  */
  int year;
  string babyName;
  cout << "Enter a name to find what percent of babies born had that name: ";
  cin >> babyName;
  cout << "Enter a year to check: ";
  cin >> year;

  switch(year)
  {
    case 2001:
    {
      string line;                                                              //creates string called line
      ifstream myfile;                                                          //Creates ifstream to read in data
      vector <string> allNames;                                                //Next two lines create vectors to get all the names and all the numbers
      vector <int> allNumber;
      int sum = 0;                                                              //Variable which will be the sum amount of the the times the name is used
      double nameValue = 0;                                                     //Will get the value at a given name
      double percent = 0;                                                       //Will contain the percentage

      myfile.open("babynamesranking2001.txt");                                  //Opens file

      string maleName, femaleName;
      int rank, maleNumber, femaleNumber;
      while (!myfile.eof())
      {
        myfile >> rank >> maleName >> maleNumber >> femaleName >> femaleNumber; //Takes myfile (which is the text, and takes the first block of text and saves it into rank and so on)
        allNames.push_back(maleName);
        allNames.push_back(femaleName);
        allNumber.push_back(maleNumber);
        allNumber.push_back(femaleNumber);
      }

      for(int i = 0; i < allNames.size(); i++)                                  //Iterates through the vector to add all the numbers to sum, and find the number at inputed name and saves it into nameValue
      {
        sum += allNumber[i];
        if(allNames[i] == babyName)
        {
          nameValue = allNumber[i];
        }
      }
      percent = (nameValue / sum)*100;                                          //Does the math to find the percentage
      cout << percent << "% of people share that name." << endl;

      break;
    }
    case 2002:
    {
      string line;
      ifstream myfile;
      vector <string> allNames;
      vector <int> allNumber;
      int sum = 0;
      double nameValue = 0;
      double percent = 0;

      myfile.open("babynamesranking2002.txt");

      string maleName, femaleName;
      int rank, maleNumber, femaleNumber;
      while (!myfile.eof())
      {
        myfile >> rank >> maleName >> maleNumber >> femaleName >> femaleNumber;
        allNames.push_back(maleName);
        allNames.push_back(femaleName);
        allNumber.push_back(maleNumber);
        allNumber.push_back(femaleNumber);
      }

      for(int i = 0; i < allNames.size(); i++)
      {
        sum += allNumber[i];
        if(allNames[i] == babyName)
        {
          nameValue = allNumber[i];
        }
      }
      percent = (nameValue / sum)*100;
      cout << percent << "% of people share that name." << endl;

      break;
    }
    case 2003:
    {
      string line;
      ifstream myfile;
      vector <string> allNames;
      vector <int> allNumber;
      int sum = 0;
      double nameValue = 0;
      double percent = 0;

      myfile.open("babynamesranking2003.txt");

      string maleName, femaleName;
      int rank, maleNumber, femaleNumber;
      while (!myfile.eof())
      {
        myfile >> rank >> maleName >> maleNumber >> femaleName >> femaleNumber;
        allNames.push_back(maleName);
        allNames.push_back(femaleName);
        allNumber.push_back(maleNumber);
        allNumber.push_back(femaleNumber);
      }

      for(int i = 0; i < allNames.size(); i++)
      {
        sum += allNumber[i];
        if(allNames[i] == babyName)
        {
          nameValue = allNumber[i];
        }
      }
      percent = (nameValue / sum)*100;
      cout << percent << "% of people share that name." << endl;

      break;
    }
    case 2004:
    {
      string line;
      ifstream myfile;
      vector <string> allNames;
      vector <int> allNumber;
      int sum = 0;
      double nameValue = 0;
      double percent = 0;

      myfile.open("babynamesranking2004.txt");

      string maleName, femaleName;
      int rank, maleNumber, femaleNumber;
      while (!myfile.eof())
      {
        myfile >> rank >> maleName >> maleNumber >> femaleName >> femaleNumber;
        allNames.push_back(maleName);
        allNames.push_back(femaleName);
        allNumber.push_back(maleNumber);
        allNumber.push_back(femaleNumber);
      }

      for(int i = 0; i < allNames.size(); i++)
      {
        sum += allNumber[i];
        if(allNames[i] == babyName)
        {
          nameValue = allNumber[i];
        }
      }
      percent = (nameValue / sum)*100;
      cout << percent << "% of people share that name." << endl;

      break;
    }
    case 2005:
    {
      string line;
      ifstream myfile;
      vector <string> allNames;
      vector <int> allNumber;
      int sum = 0;
      double nameValue = 0;
      double percent = 0;

      myfile.open("babynamesranking2005.txt");

      string maleName, femaleName;
      int rank, maleNumber, femaleNumber;
      while (!myfile.eof())
      {
        myfile >> rank >> maleName >> maleNumber >> femaleName >> femaleNumber;
        allNames.push_back(maleName);
        allNames.push_back(femaleName);
        allNumber.push_back(maleNumber);
        allNumber.push_back(femaleNumber);
      }

      for(int i = 0; i < allNames.size(); i++)
      {
        sum += allNumber[i];
        if(allNames[i] == babyName)
        {
          nameValue = allNumber[i];
        }
      }
      percent = (nameValue / sum)*100;
      cout << percent << "% of people share that name." << endl;

      break;
    }
    case 2006:
    {
      string line;
      ifstream myfile;
      vector <string> allNames;
      vector <int> allNumber;
      int sum = 0;
      double nameValue = 0;
      double percent = 0;

      myfile.open("babynamesranking2006.txt");

      string maleName, femaleName;
      int rank, maleNumber, femaleNumber;
      while (!myfile.eof())
      {
        myfile >> rank >> maleName >> maleNumber >> femaleName >> femaleNumber;
        allNames.push_back(maleName);
        allNames.push_back(femaleName);
        allNumber.push_back(maleNumber);
        allNumber.push_back(femaleNumber);
      }

      for(int i = 0; i < allNames.size(); i++)
      {
        sum += allNumber[i];
        if(allNames[i] == babyName)
        {
          nameValue = allNumber[i];
        }
      }
      percent = (nameValue / sum)*100;
      cout << percent << "% of people share that name." << endl;

      break;
    }
    case 2007:
    {
      string line;
      ifstream myfile;
      vector <string> allNames;
      vector <int> allNumber;
      int sum = 0;
      double nameValue = 0;
      double percent = 0;

      myfile.open("babynamesranking2007.txt");

      string maleName, femaleName;
      int rank, maleNumber, femaleNumber;
      while (!myfile.eof())
      {
        myfile >> rank >> maleName >> maleNumber >> femaleName >> femaleNumber;
        allNames.push_back(maleName);
        allNames.push_back(femaleName);
        allNumber.push_back(maleNumber);
        allNumber.push_back(femaleNumber);
      }

      for(int i = 0; i < allNames.size(); i++)
      {
        sum += allNumber[i];
        if(allNames[i] == babyName)
        {
          nameValue = allNumber[i];
        }
      }
      percent = (nameValue / sum)*100;
      cout << percent << "% of people share that name." << endl;

      break;
    }
    case 2008:
    {
      string line;
      ifstream myfile;
      vector <string> allNames;
      vector <int> allNumber;
      int sum = 0;
      double nameValue = 0;
      double percent = 0;

      myfile.open("babynamesranking2008.txt");

      string maleName, femaleName;
      int rank, maleNumber, femaleNumber;
      while (!myfile.eof())
      {
        myfile >> rank >> maleName >> maleNumber >> femaleName >> femaleNumber;
        allNames.push_back(maleName);
        allNames.push_back(femaleName);
        allNumber.push_back(maleNumber);
        allNumber.push_back(femaleNumber);
      }

      for(int i = 0; i < allNames.size(); i++)
      {
        sum += allNumber[i];
        if(allNames[i] == babyName)
        {
          nameValue = allNumber[i];
        }
      }
      percent = (nameValue / sum)*100;
      cout << percent << "% of people share that name." << endl;

      break;
    }
    case 2009:
    {
      string line;
      ifstream myfile;
      vector <string> allNames;
      vector <int> allNumber;
      int sum = 0;
      double nameValue = 0;
      double percent = 0;

      myfile.open("babynamesranking2009.txt");

      string maleName, femaleName;
      int rank, maleNumber, femaleNumber;
      while (!myfile.eof())
      {
        myfile >> rank >> maleName >> maleNumber >> femaleName >> femaleNumber;
        allNames.push_back(maleName);
        allNames.push_back(femaleName);
        allNumber.push_back(maleNumber);
        allNumber.push_back(femaleNumber);
      }

      for(int i = 0; i < allNames.size(); i++)
      {
        sum += allNumber[i];
        if(allNames[i] == babyName)
        {
          nameValue = allNumber[i];
        }
      }
      percent = (nameValue / sum)*100;
      cout << percent << "% of people share that name." << endl;

      break;
    }
    case 2010:
    {
      string line;
      ifstream myfile;
      vector <string> allNames;
      vector <int> allNumber;
      int sum = 0;
      double nameValue = 0;
      double percent = 0;

      myfile.open("babynamesranking2010.txt");

      string maleName, femaleName;
      int rank, maleNumber, femaleNumber;
      while (!myfile.eof())
      {
        myfile >> rank >> maleName >> maleNumber >> femaleName >> femaleNumber;
        allNames.push_back(maleName);
        allNames.push_back(femaleName);
        allNumber.push_back(maleNumber);
        allNumber.push_back(femaleNumber);
      }

      for(int i = 0; i < allNames.size(); i++)
      {
        sum += allNumber[i];
        if(allNames[i] == babyName)
        {
          nameValue = allNumber[i];
        }
      }
      percent = (nameValue / sum)*100;
      cout << percent << "% of people share that name." << endl;

      break;
      }
    default:
    {
      cout << "error" << endl;
    }
  }
  main();
}

void seeVector(vector<string> vect) //DONEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE
/*
  Purpose: To print out the name that each gender has in commmon for the given year
  Parameters: vector<string> vect
  Return Value: none
  Description: It goes through all the elements of a vector and print them out. It iterates through the entire list and then prints out the names in the given vector. Then it prints them
               out on the screen in 6 columns, hence why the modulo 6 is there.
*/
{
  ofstream outFile;
  outFile.open("commonname#year#.txt");
  for (int i = 0; i < vect.size(); i++)                                              //To iterate through the size of vector
  {
    if((i+1)%6 == 0)                                                                 //Prints out 6 columns
    {
      cout << endl;
    }
    cout << vect[i] << "\t";
    outFile << vect[i] << "\n";
  }
  cout << endl;
  outFile.close();
}

int ArrayToStr(string str)
{
  //get length of string str
  int str_length = str.length();

  //create array and initialize
  int arr[str_length] = {0};

  int j = 0, i, sum = 0;

  for(i = 0; str[i] != '\0'; i++)
  {
    arr[j] = arr[j] * 10 + (str[i] - 48);
  }

  return arr[j];
}
