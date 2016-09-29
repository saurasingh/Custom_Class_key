struct Key
{
  Address Address_starting;
  Address Address_ending;
  size_t size;

  bool operator==(const Key &other) const
  { return (Address_starting == other.Address_starting
            && Address_ending == other.Address_ending
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
            res = res * 9176 + hash<string>()( k.Address_starting );
            res = res * 9176 + hash<string>()( k.Address_ending );
            res = res * 9176 + hash<int>()( k.size );
            return res;
        }
    };

Vertex *