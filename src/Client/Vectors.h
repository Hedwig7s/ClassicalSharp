#ifndef CS_VECTORS_H
#define CS_VECTORS_H
#include "Typedefs.h"
#include "Matrix.h"
/* Represents 2, 3 dimensional vectors.
   Copyright 2017 ClassicalSharp | Licensed under BSD-3
*/

typedef struct Vector2_ { Real32 X, Y; } Vector2;
typedef struct Vector3_ { Real32 X, Y, Z; } Vector3;



/* Constructs a 2D vector from the given coordinates. */
Vector2 Vector2_Create2(Real32 x, Real32 y);

/* Constructs a 3D vector with X, Y and Z set to given value. */
Vector3 Vector3_Create1(Real32 value);

/* Constructs a 3D vector from the given coordinates. */
Vector3 Vector3_Create3(Real32 x, Real32 y, Real32 z);


/* Returns the length of the given vector. */
Real32 Vector3_Length(Vector3* v);

/* Returns the squared length of the given vector. */
Real32 Vector3_LengthSquared(Vector3* v);


#define Vector2_UnitX Vector2_Create2(1.0f, 0.0f)
#define Vector2_UnitY Vector2_Create2(0.0f, 1.0f)
#define Vector2_Zero Vector2_Create2(0.0f, 0.0f)
#define Vector2_One Vector2_Create2(1.0f, 1.0f)

#define Vector3_UnitX Vector3_Create3(1.0f, 0.0f, 0.0f)
#define Vector3_UnitY Vector3_Create3(0.0f, 1.0f, 0.0f)
#define Vector3_UnitZ Vector3_Create3(0.0f, 0.0f, 1.0f)
#define Vector3_Zero Vector3_Create3(0.0f, 0.0f, 0.0f)
#define Vector3_One Vector3_Create3(1.0f, 1.0f, 1.0f)


/* Adds a and b. */
void Vector3_Add(Vector3* result, Vector3* a, Vector3* b);

/* Adds b to all components of a. */
void Vector3_Add1(Vector3* result, Vector3* a, Real32 b);

/* Subtracts b from a. */
void Vector3_Subtract(Vector3* result, Vector3* a, Vector3* b);

/* Multiplies all components of a by scale. */
void Vector3_Multiply1(Vector3* result, Vector3* a, Real32 scale);

/* Multiplies components of a by scale. */
void Vector3_Multiply3(Vector3* result, Vector3* a, Vector3* scale);

/* Divides all components of a by scale. */
void Vector3_Divide1(Vector3* result, Vector3* a, Real32 scale);

/* Divides components of a by scale. */
void Vector3_Divide3(Vector3* result, Vector3* a, Vector3* scale);


/* Linearly interpolates between two vectors. */
void Vector3_Lerp(Vector3* result, Vector3* a, Vector3* b, Real32 blend);

/* Calculates the dot product of two vectors. */
Real32 Vector3_Dot(Vector3* left, Vector3* right);

/* Calculates the cross product of two vectors. */
void Vector3_Cross(Vector3* result, Vector3* a, Vector3* b);

/* Calculates the normal of a vector. */
void Vector3_Normalize(Vector3* result, Vector3* a);


/* Transforms a vector by the given matrix. */
void Vector3_Transform(Vector3* result, Vector3* a, Matrix* mat);

/* Transforms the Y component of a vector by the given matrix. */
void Vector3_TransformY(Vector3* result, Real32 y, Matrix* mat);

/* Rotates the given 3D coordinates around the x axis. */
Vector3 Vector3_RotateX(Vector3 v, Real32 angle);

/* Rotates the given 3D coordinates around the y axis. */
Vector3 Vector3_RotateY(Vector3 v, Real32 angle);

/* Rotates the given 3D coordinates around the y axis. */
Vector3 Vector3_RotateY3(Real32 x, Real32 y, Real32 z, Real32 angle);

/* Rotates the given 3D coordinates around the z axis. */
Vector3 Vector3_RotateZ(Vector3 v, Real32 angle);


/* Returns whether the two vectors are exact same on all axes. */
bool Vector3_Equals(Vector3* a, Vector3* b);

/* Returns whether the two vectors are different on any axis. */
bool Vector3_NotEquals(Vector3* a, Vector3* b);
#endif