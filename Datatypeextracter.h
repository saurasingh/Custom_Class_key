#include "\syzygy\refinery\process_state\process_state_util.h"
#include "\syzygy\refinery\process_state\process_state_util.cc"
#include "\syzygy\refinery\process_state\process_state.cc"
#include "\syzygy\refinery\process_state\process_state.h"
#include "\syzygy\refinery\types\type.h"
#include "\syzygy\refinery\types\type.cc"
#include "\syzygy\refinery\types\type_repository.h"
#include "\syzygy\refinery\types\type_repository.cc"

void DataTypeExtracter()
{
TypeRepository type_object;
TypeId type_id_typerepo = data().type_id();  // neded to figure out if this is a right way to get typeid from the Typed block layer
TypePtr  type_pointer = type_object.GetType(CastTo(&type_id_typerepo)); // @p type_pointer a TypePtr pointer to point to Type class & here is the place which need to be figure out how to down cast the type we get. 

if (*type_pointer==USER_DEFINED_TYPE_KIND)
{
	Field field_object;
	FieldKind fieldkind_object;
	fieldkind_object = field_object.kind();
	if ( fieldkind_object == BASE_CLASS_KIND)
	{
			BaseClassField baseclass_object;
			TypeId baseclass_typeid = baseclass_object.Field.type_id();
			TypePtr baseclass_pointer = UserDefinedType::Field::GetType(CastTo(&baseclass_object)); //get the type of the base class kind
			ptrdiff_t baseclass_offset = baseclass_object.Field.offset();  // get the offset for the same kind
			 // need to add code  here for graph were we will added offset value and data type name at nodes. 
	}
    else if (fieldkind_object == MEMBER_KIND)
	{   	

			// In case of Member field there is a name of the new member field not getting what actually this hold and how to utilize the same here.
			MemberField member_object;
			TypeId member_typeid = member_object.Field.type_id();
			TypePtr member_pointer = UserDefinedType::Field::GetType(CastTo(&member_typeid));
			ptrdiff_t member_offset = member_object.Field.offset(); // get offeset for the member 
			size_t memberbit_len = member_object.bit_len(); // bit length of the memeber.
			//need to add code here for the  graph.
	}
	else if (fieldkind_object == VFPTR_KIND)
	{
			VfptrField vfptr_object;
			TypeId vfptr_typeid = vfptr_object.Field.type_id();
			TypePtr vfptr_pointer = UserDefinedType::Field::GetType(CastTo(&vfptr_typeid));
			ptrdiff_t vfptr_offset = vfptr_object.Field.offset(); // get offset for the vfptr. 
			//need to add code for the graph here			
				
	}
	
}
};