#include <stdio.h>
#include <iostream>
#include <time.h>
#include <string.h>
using namespace std;
 
 class page {
	public:
		void header(string MIME_TYPE)
		{
			cout << "Content-type: " << MIME_TYPE << endl << endl;
		}
		
		void start_page(string TITLE)
		{
			cout << "<html>" << endl;
			cout << "	<head>" << endl;
			cout << "		<title>" << TITLE << "</title>" << endl;
			cout << "		<link rel=\"stylesheet\" href=\"../../styles.css\">" << endl;
			cout << "	</head>" << endl;
			cout << "	<body>" << endl;
			cout << "		<h2>Table Created by C++</h2>" << endl;
		}
		void end_page()
		{
			cout << "		</br>" << endl;
			cout << "		<form action = \"../../index.html\" method = \"get\">" << endl;
			cout << "			<input class = \"button\" type = \"submit\" value = \"Go Back\">" << endl;
			cout << "		</form>" << endl;
			cout << "	</body>" << endl;
			cout << "</html>" << endl;
		}
 };
 
int main()
{
	char* Qptr, Sep;
	page myPage;
	myPage.header("text/html");
	myPage.start_page("Table Created by C++");
	if(Qptr = getenv("QUERY_STRING"))
	{
		char buffer[10];
		char* token;
		char no[10];
		strncpy(buffer, Qptr, 9);
		
		token = strtok(buffer, "&");
		sscanf (token,"number=%s",no);
		
		
		cout << "		<table>" << endl;
		for(int j = 0; j< atoi(no); j++)
		{
			cout << "			<tr><td>Row# " << j+1 << "</td><td>" << rand() % 100 + 1 << "</td></tr>" << endl;
		}
		cout << "		</table>" << endl;
		
		
		
	}
	else
	{
		cout << "<p>test2</p>" << endl;
	}
	myPage.end_page();
	
	return 0;
}