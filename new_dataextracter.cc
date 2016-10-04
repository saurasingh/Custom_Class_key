#include "syzygy\refinery\types\typed_data.h"
#include "syzygy\refinery\types\typed_data.c"
#include "syzygy\refinery\types\type.c"
#include "syzygy\refinery\types\type.h"

void Data_Extracter()
{


Type get_type_name;
TypePtr data_type;
Address address;
size_t bit_position;
size_t bit_length; 
TypedData typedata_object;

data_type = typedata_object.type();
address = typedata_object.addr();
bit_position = typedata_object.bit_pos();
bit_length = typedata_object.bit_len();

if (data_type == BASIC_TYPE_KIND )
	
	string16 type_name= get_type_name.GetName(); //what I should pass here to get the name... how my program will know what data type to return.
	Vertex(address,type_name,bit_length);


}
elseif (data_type== Pointer)