#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include <cstdlib>

# define prime 11
using namespace std;
//  hashing is working but the counting part is not working.

int robin_karp(string text , string checker)
{
  int i ,j,count = 0, sum =0;
  int ch = checker.length();
  int txt = text.length();
  int hash_p ;
  int hash_temp;
  for (int i = 0; i < ch; i++)
    {
      sum += int(checker[i])* pow(prime,i);
      // for debug cout<<"sum 1 "<<sum<<endl;
    }
  hash_p = sum;
  cout << hash_p << '\n';
  sum = 0;
  for (int i = 0; i < ch; i++)
    {
      sum += int(text[i])* pow(prime,i);
    //for debug  cout<<"sum 2 "<<sum<<endl;

    }
  hash_temp =sum;
  //for debug cout << hash_temp << '\n';

  for(int i = ch ; i < txt ; i++)
  {
    //cout<<"hash_temp" <<hash_temp << '\n';
//implementation of rolling hash function ->
    if (hash_temp == hash_p)
          {
             int flag = 0;
              for (int j = 0 ; j  < ch ; j++)
              {
                if(text[i+j - ch ] != checker[j])
                  {
                   flag = -1;
                   break;
                  }
              }
               if(flag == 0)
             ++count;
          }

    hash_temp = ((hash_temp - int(text[i-ch]))/prime)+int(text[i])*pow(prime,ch-1);
  }

return count;
}


int main()
{
  string text, checker;
  cout<<"enter the text string"<<text<<endl;
  getline(cin,text);
  cout<<"enter the checker sub string"<<endl;
  getline(cin,checker);
  cout<<"no of occurence :"<<robin_karp(text,checker)<<endl;
  return 0;
}
