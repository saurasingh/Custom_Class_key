struct Vertex
{
	Adress Adress;
	size_t size;
	Type DataType;
	
}

struct Key
{
  Address Address;
  size_t size;

  bool operator==(const Key &other) const
  { return (Address  == other.Address 
            && size == other.size);
  }
};



template <> 
	struct hash<Key>
    {
        size_t operator()( const Key& k ) const
        {
            // Compute individual hash values for Address_starting, Address_ending and size 
            // http://stackoverflow.com/a/1646913/126995
            size_t res = 1009;
            res = res * 9176 + hash<Address>()( k.Address );
            res = res * 9176 + hash<size_t>()( k.size );
            return res;
        }
    };

Vertex *FindorCreatevertex(Adress, Type,hash,Key)
{
    	unordered_map<Address, Type, hash, > vertex_map;
		if (vertex_map.find(Key)==vertex_map.end())
		{
			vertex_map.insert(make_pair(Key,Type);
		}
		else
		{
			return vertex_map.find(Key);
		}
	
	}