#include <iostream>
#include <string>
std::string likes(const std::vector<std::string> &names)
{
  if(names.size()==0){
    return "no one likes this";
  } 
  else if(names.size()==1){
    std::string res = names[0]; 
    return res + " likes this";
  } 
  else if(names.size()==2){
    std::string res1 = names[0];
    std::string res2 = names[1];
    return res1 + " and " + res2 + " like this";
    }
  else if(names.size()==3){
    std::string res1 = names[0];
    std::string res2 = names[1];
    std::string res3 = names[2];
    return res1 + ", " + res2 + " and " + res3 + " like this";
  } 
  else{
    std::string res1 = names[0];
    std::string res2 = names[1];
    std::string res3 = std::to_string(names.size()-2);
    return res1 + ", " + res2 + " and " + res3 + " others like this";
  }  
}
