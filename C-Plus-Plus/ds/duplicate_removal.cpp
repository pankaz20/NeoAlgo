/* CPP program to remove duplicate character
 from character array and print it.
 Step1:- Traverse through all the characters
 Step2:-check if it is present in it(if it is present then break the loop).
 Step3:-If it is not present then add it to the result.
        and then print it.
 */
#include <bits/stdc++.h>
using namespace std;

char *removeDuplicate(char str[], int n)
{
    // Used as index in the modified string
    int index = 0;   

// Traverse through all characters
    for (int i=0; i<n; i++) {

	// Check if str[i] is present before it
	int j;
	for (j=0; j<i; j++)
		if (str[i] == str[j])
		break;

	// If not present, then add it to
	// result.
	if (j == i)
    str[index++] = str[i];
}

return str;
}

// Driver code
int main()
{
	char str[1000];
	cin>>str;
	int n = sizeof(str) / sizeof(str[0]);
	cout << removeDuplicate(str, n);
	return 0;
}
/*Time Complexity : O(n * n)
Auxiliary Space : O(1)

Sample input
aaggarwal

Sample output
agrwl
*/