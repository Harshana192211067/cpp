#include <iostream> 
using namespace std; 

int vowelCount(char *sptr) 
{ 
	int count = 0,c=0; 

	// Iterate the loop until null character encounter 
	while ((*sptr) != '\0') { 

		// Check whether character pointer finds any vowels 
		if (*sptr == 'a' || *sptr == 'e' || *sptr == 'i'
			|| *sptr == 'o' || *sptr == 'u') { 

			// If vowel found increment the count 
			count++; 
		} 
		else
		{
			c++; 
		
		}

		// Increment the pointer to next location 
		// of address 
		sptr++; 
	} 
	cout<<"Constonant value: "<<c<<endl;
	cout<<"Vowel value: "<<count<<endl; 
} 

int main() 
{ 
	char str[] = "aeiouBCD"; 

 vowelCount(str); 
} 

