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
      if((int)pass[j] < 123 && (int)pass[j] > 96)
        {
          c_pass[j] = ((int)pass[j] + number - 97) % 26 + 97;
        }
      else if((int)pass[j]< 91 && (int)pass[j] > 64)
        {
          c_pass[j] = ((int)pass[j] + number - 65) % 26 + 65;
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
