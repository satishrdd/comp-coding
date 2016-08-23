#include<cstdio>
#include<iostream>
#include<string>
#include<cstdlib>
#include<queue>
#include<stack>
#include<utility>
#include<string>
#include<cstring>
#include<set>
#include<cmath>
#include<vector>
#include<fstream>
#include<map>
#include<list>
#include<algorithm>

typedef long long int LLD;
typedef unsigned long long int LLU;

using namespace std;

string add(string a, string b){
    //  Returns the sum of a and b.
    stack<int> st;
    string res = "";
    int i = a.length() - 1, j = b.length() - 1, carry = 0, sum;
    while(i >= 0 && j >= 0){
        sum = (a[i] - 48) + (b[j] - 48) + carry;
        st.push(sum % 10);
        carry = sum / 10;
        i--;j--;
    }
    while(i >= 0){
        sum = (a[i] - 48) + carry;
        st.push(sum % 10);
        carry = sum / 10;
        i--;
    }
    while(j >= 0){
        sum = (b[j] - 48) + carry;
        st.push(sum % 10);
        carry = sum / 10;
        j--;
    }
    while(carry){
        st.push(carry % 10);
        carry /= 10;
    }
    while(!st.empty()){
        res.append(1, st.top() + 48);
        st.pop();
    }
    return res;
}

string removeLeadingZeros(string s){
    //  Removes the leading zeros from the string.
    string res = "";
    int i;
    for(i=0;i<s.length() && s[i] == '0';i++);
    while(i<s.length()){
        res.append(1, s[i]);
        i++;
    }
    if(res == "")
        res = "0";
    return res;
}

string intMultiply(string a, int b){
    //  Returns the product of string a and a digit b.
    stack<int> st;
    string res = "";
    int i = a.length() - 1, carry = 0, sum;
    while(i >= 0){
        sum = (b * (a[i] - 48)) + carry;
        carry = sum / 10;
        st.push(sum % 10);
        i--;
    }
    while(carry){
        st.push(carry % 10);
        carry /= 10;
    }
    while(!st.empty()){
        res.append(1, st.top() + 48);
        st.pop();
    }
    return res;
}

string multiply(string s, string t){
    //  Returns the product of s and t.
    int power = 0;
    string res = "0", tmp = "";
    stack<int> st;
    for(int i=s.length() - 1;i>=0;i--){
        tmp = intMultiply(t, s[i] - 48);
        tmp.append(power, '0');
        power++;
        tmp = removeLeadingZeros(tmp);
        res = add(res, tmp);
    }
    return res;
}

string divide(string input, int n){
    //  Returns the integer quotient for 'input / n'.
    string tmp = "";
    int m = 0;
    bool first = true;
    for(int i=0;i<input.length();){
        m *= 10;
        m += (input[i] - 48);
        if(m / n > 0){
            first = false;
            tmp.append(1, (m/n)+48);
        }
        else{
            if(!first)
                tmp.append("0");
        }
        m %= n;
        i++;
    }
    if(tmp == "")
        tmp = "0";
    return removeLeadingZeros(tmp);
}

string myMaximum(string a, string b){
    //  Returns the maximum of a and b.
    if(a.length() > b.length())
        return a;
    else if(b.length() > a.length())
        return b;
    for(int i=0;i<a.length();i++){
        if(a[i] == b[i])
            continue;
        else if(a[i] > b[i])
            return a;
        else
            return b;
    }
    return a;
}

int main(){
 
 int cases;
 string m, n;
 cin>>cases;
 while(cases--){
  cin >> m >> n;
  cout << myMaximum(multiply(m, divide(add(n, "1"), 2)), multiply(n, divide(add(m, "1"), 2))) << endl;
 }
    return 0;
}