// Code generated by xgen. DO NOT EDIT.

package schema

// Vehicle ...
type Vehicle struct {
}

// Car ...
type Car struct {
	*Vehicle
}

// Plane ...
type Plane struct {
	*Vehicle
}

// Transport ...
type Transport *Vehicle
