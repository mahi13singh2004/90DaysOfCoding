class Solution {
public:
    string defangIPaddr(string address) {
        string empty;
        for(int i=0; i<address.size(); i++){
            if(address[i]=='.'){
                empty=empty+"[.]";
            }
            else{
                empty=empty+address[i];
            }
        }
        return empty;
    }
};
