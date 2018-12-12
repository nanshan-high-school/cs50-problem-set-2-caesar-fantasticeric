#include <iostream>
using namespace std;
const int number = 3;
int count(string pass);
string encrypt(int i, string pass);
void output(int i, string c_pass);
int main() {
  string password;
  cout << "請輸入密碼:";
  cin >> password;
  int i = count(password);
  output(i, encrypt(i, password)); 
}
//計算密碼位數
int count(string pass)
  {
    int i=0;
    while((int)pass[i] != 0)
      {
        i++;
      }
    return i;
  }
//密碼加密
string encrypt(int i, string pass)
  {
    string c_pass;
    for(int j = 0; j < i; j++)
    {
      if((int)pass[j] <= 'z' && (int)pass[j] >= 'a')
        {
          c_pass[j] = ((int)pass[j] + number - 'a') % 26 + 'a';
        }
      else if((int)pass[j] <= 'Z' && (int)pass[j] >= 'A')
        {
          c_pass[j] = ((int)pass[j] + number - 'A') % 26 + 'A';
        }
      else
        {
          c_pass[j] = pass[j];
        }        
    }
    return c_pass;    
  }
//輸出加密後的字串
void output(int i, string c_pass)
  {
    for (int k=0; k < i; k++)
    {
      cout << c_pass[k];
    }
  }
