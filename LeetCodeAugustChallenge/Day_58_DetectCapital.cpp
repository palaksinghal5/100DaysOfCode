class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word.length()==1){return 1;}
        
        if(word[0]>='A'&&word[0]<='Z'){
        if(word[1]>='A'&&word[1]<='Z')
        {
            for(int i=2;word[i];i++)
            {
                if(word[i]<'A'||word[i]>'Z')
                {
                    return 0;
                }
            }
        }
        else{
            for(int i=2;word[i];i++){
                if(word[i]>='A'&&word[i]<='Z'){
                    return 0;
                }
            }
        }
        
    }
    
    else{
        for(int i=1;word[i];i++){
            if(word[i]>='A'&&word[i]<='Z'){
                return 0;
            }
        }
    }
    
    return 1;
        
    }
};
