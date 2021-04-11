#include <bits/stdc++.h>
using namespace std; 
#define DELIM '\n' 
  
/* Function to print last n lines of a given string */
void print_last_lines(char *str, int n) 
{ 
    if (n <= 0) 
    return; 
    size_t cnt = 0; 
    char *target_pos = NULL; 
    target_pos = strrchr(str, DELIM); 
    if (target_pos == NULL) 
    { 
        cout << "ERROR: string doesn't contain '\\n' character\n";   return; 
    } 
    while (cnt < n) 
    { 
        while (str < target_pos && *target_pos != DELIM) 
            --target_pos; 
        if (*target_pos == DELIM) 
            --target_pos, ++cnt; 
        else
            break; 
    } 
    if (str < target_pos) 
        target_pos += 2; 
    cout << target_pos << endl; 
} 
  
// Driver Code
int main(void) 
{ 
    char *str1 ="str1\nstr2\nstr3\nstr4\nstr5\nstr6\nstr7\nstr8\nstr9"
                "\nstr10\nstr11\nstr12\nstr13\nstr14\nstr15\nstr16\nstr17"
                "\nstr18\nstr19\nstr20\nstr21\nstr22\nstr23\nstr24\nstr25"; 
    char *str2 ="str1\nstr2\nstr3\nstr4\nstr5\nstr6\nstr7"; 
    char *str3 ="\n"; 
    char *str4 = ""; 
  
    print_last_lines(str1, 10); 
    cout << "-----------------\n"; 
  
    print_last_lines(str2, 10); 
    cout << "-----------------\n";
  
    print_last_lines(str3, 10); 
    cout << "-----------------\n";; 
  
    print_last_lines(str4, 10); 
    cout << "-----------------\n";
  
    return 0; 
} 
  
