int makeBeautiful(string str) {
	// Write your code here
	int c=0;
	string s=str;
	int i;
	for(i=0;i<str.length()-1;i++)
	{
		if(str[i]==str[i+1])
		{
			if(str[i+1]=='1')
			str[i+1]='0';
			else str[i+1]='1';
			i--;
		}
	}
	//cout << str;
	for(i=0;i<str.length();i++){
		if(str[i]!=s[i])
		c++;
	}
	int l=str.length();
	c=min(c,l-c);
	return c;
}
