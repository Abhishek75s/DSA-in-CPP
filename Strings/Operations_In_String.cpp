// Credit goes to Abhishek Srivastava 
#include <iostream>
#include<algorithm>
using namespace std;

int main() 
{
    // 1st method of initialisation
    string str("aman");
    cout<<str;           cout <<"\n\n";
    
    // 2nd method of string intialisation;
    string str1 = "naman";
    cout<<str1;          cout <<"\n\n";
    
    // 3rd method of initialisation
    string str2 = {'s', 'h', 'i', 'v', 'a'};
    cout<<str2;          cout <<"\n\n";
    
    // single word input
    string str3;
    cin>>str3;          // reads until only space, tab, newline is not encoutered
    cout<<str3;          cout <<"\n\n";
    
    // complete sentence input
    cin.ignore(100, '\n'); // to flush data from inut stream
    string str4; 
    getline(cin, str4);
    cout<<str4;          cout <<"\n\n";
    
    // append() 
    string s1("fam");
    string s2 = "ily";
    s1.append(s2);
    s1.append(".");
    cout<<s1;          cout <<"\n\n";
    
    // clear() 
    string s3("sundar");
    cout<<s3;          cout <<"\n\n";
    s3.clear();
    
    // empty() 
    cout<<"is s3 Empty: "<<(s3.empty());  cout <<"\n\n";
    
    // compare() function
    cout<<"lexicographically (str < str1) gives: "<<str.compare(str1);   cout <<"\n\n";
        // -1 : str is lexicographically smaller than str1;
        // 0 : both strings are equal
        // +1 str is lexicographically greater than str1;
    
    // erase() 
    string s4("abcxyz");
    s4.erase(2,3);
        // str_name.erase(start_pos, num_of_char_to_delete);
    cout<<"Erased one: "<<s4;          cout <<"\n\n";
    
    // find() 
    string s5 = "Mahadev";
    cout<<"find() returning the index where it is found: "<<s5.find("dev");          cout <<"\n\n";
    
    // insert() 
    string s6("ChaGanju");
    s6.insert(3, "pad");
        // str_name.insert(start_idx, "text_to_insert-in-b/w");
    cout<<"Inserted one: "<<s6;          cout <<"\n\n";
    
    // size() or length() 
    cout<<"size() or length(): "<<s6.size()<<"  "<<s6.length();          cout <<"\n\n";
    
    // stoi() sTRING to iNTEGER 
    string s7("9918");
    int num = stoi(s7);
    cout<<"stoi()"<<num<<"   "; num += 2;  cout<<num; cout <<"\n\n";
    
    // to_string() 
    int x = 17;
    string s8 = to_string(x);
    cout<<s8+"converted to string";          cout <<"\n\n";
    
    // sort() asc/desc
    string s9("zempoqa");
    sort(s9.begin(), s9.end());
    cout<<"sorted ascending: "<<s9<<endl;
    
    sort(s9.begin(), s9.end(), greater<int>());
    cout<<"descendingly sorted: "<<s9;   cout <<"\n\n";
    
    // substr()
    string str10("Chemical");
    cout<<"substr(): "<<str10.substr(3,4);
    
}
