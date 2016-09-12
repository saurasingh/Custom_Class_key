void DataTypeExtracter()
{
TypeRepository type_object;
TypeId type_id_typerepo = data().type_id();  // neded to figure out if this is a right way to get typeid from the Typed block layer
TypePtr  type_pointer = type_object.GetType(&type_id_typerepo); // @p type_pointer a TypePtr pointer to point to Type class 

//here is the place which need to be figure out how to down cast the type we get. 

if (*type_pointer=USER_DEFINED_TYPE_KIND)
{
Field field_object;
FieldKind 
}
};