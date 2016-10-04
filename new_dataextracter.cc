#include "syzygy\refinery\types\typed_data.h"
#include "syzygy\refinery\types\typed_data.c"

void Data_Extracter()
{



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



}