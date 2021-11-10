string StringChallenge(string s)
{
    string ans = "";
    int i;

    ans += s[0];

    for(i=1; i<s.length(); i++)
    {
        if( (s[i-1]-'0')%2 == 0 && (s[i]-'0')%2 == 0 )
            ans += "*";
        

        else if( (s[i-1]-'0')%2 == 1 && (s[i]-'0')%2 == 1 )
            ans += "-";

        ans += s[i];
    }

    return ans;
}