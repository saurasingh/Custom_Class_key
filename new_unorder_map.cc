#include <iostream>
#include <unordered_map>
using namespace std;

struct Key
{
  std::string first;
  std::string second;
  int         third;

  bool operator==(const Key &other) const
  { return (first == other.first
            && second == other.second
            && third == other.third);
  }
};

namespace std {

  template <>
  struct hash<Key>
  {
    std::size_t operator()(const Key& k) const
    {
      using std::size_t;
      using std::hash;
      using std::string;

      // Compute individual hash values for first,
      // second and third and combine them using XOR
      // and bit shifting:

      return ((hash<string>()(k.first)
               ^ (hash<string>()(k.second) << 1)) >> 1)
               ^ (hash<int>()(k.third) << 1);
    }
  };

}

typedef std::unordered_map<Key,std::string> m6;

m6::diplaypoint(m6 p){
	cout << p.first<<""<<p.second;
	}
	
int main() {
m6 c1;
c1.insert(m6::value_type({"John", "Doe", 12}, "example"));
c1.insert(m6::value_type({"Mary", "Sue", 21}, "another"));
 
  for (m6::iterator it = c1.begin(); 
        it != c1.end(); ++it) 
        
        cout << it->first << ", " << it->second;
    std::cout << std::endl; 
	return 0;
}