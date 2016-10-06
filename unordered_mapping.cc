namespace refinery {

struct Vertex
{
	Address address;
	size_t size;
	Type dataType;
	//also include address range
}

struct Equal_Key
{
  Address address;
  size_t size;
  Type dataType;

  bool operator==(const Equal_Key &other) const
  { return (address  == other.address 
            && size == other.size
			&& dataType == other.dataType);
  }
};



template <> 
	struct hash<Equal_Key>
    {
        size_t operator()( const Equal_Key& k ) const
        { 
            // Compute individual hash values for Address_starting, Address_ending and size 
            // http://stackoverflow.com/a/1646913/126995
            size_t res = 1009;
            res = res * 9176 + hash<Address>()( k.address );
            res = res * 9176 + hash<size_t>()( k.size );
			res = res * 9176 + hash<Type>()(k.dataType);
            return res;
        }
    };

	typedef std::unordered_map<Equal_Key,std::string> new_vertex;
	
Vertex FindorCreatevertex(Adress,size_t,Type)
{
	new_vertex vertex_object;
    	
		std::string vertex_value = vertex_object[{address,size,dataType}];
		
		if (vertex_value.empty())
		{
			//cout<< "Vertex with such hypothesis is not present"
			vertex_object.insert(new_vertex::value_type({address,size,dataType}, "Vertex present"));
			
		}
		else
		{
			Vertex.address = vertex_object.first.address;
			Vertex.size    = vertex_object.first.size;
			Vertex.dataType= vertex_object.first.dataType;
		}
	
	}
}