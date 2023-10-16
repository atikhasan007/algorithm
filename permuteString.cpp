PermuteString(S,i,len){
if(i>=len)
  return ;
for(int j=i;j<len;j++){
swap(S[i],S[j]);
if(i==(len-1){
vec.push_back(S);
PermuteString(S,i+1,len);
}
}
