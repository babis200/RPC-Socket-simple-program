/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "ask1.h"

bool_t
xdr_X_array (XDR *xdrs, X_array *objp)
{
	register int32_t *buf;

	 if (!xdr_array (xdrs, (char **)&objp->X.X_val, (u_int *) &objp->X.X_len, 100,
		sizeof (int), (xdrproc_t) xdr_int))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->X_size))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_Y_array (XDR *xdrs, Y_array *objp)
{
	register int32_t *buf;

	 if (!xdr_array (xdrs, (char **)&objp->Y.Y_val, (u_int *) &objp->Y.Y_len, 100,
		sizeof (int), (xdrproc_t) xdr_int))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->Y_size))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_XY_array (XDR *xdrs, XY_array *objp)
{
	register int32_t *buf;

	 if (!xdr_array (xdrs, (char **)&objp->XY.XY_val, (u_int *) &objp->XY.XY_len, 200,
		sizeof (int), (xdrproc_t) xdr_int))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->XY_size))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_ans (XDR *xdrs, ans *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_float (xdrs, &objp->X_metre))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->X_inter_product))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->avg, 2,
		sizeof (float), (xdrproc_t) xdr_float))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_r_times_X_Y (XDR *xdrs, r_times_X_Y *objp)
{
	register int32_t *buf;

	 if (!xdr_array (xdrs, (char **)&objp->X_Y.X_Y_val, (u_int *) &objp->X_Y.X_Y_len, 100,
		sizeof (int), (xdrproc_t) xdr_int))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->X_Y_size))
		 return FALSE;
	 if (!xdr_float (xdrs, &objp->r))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_rXY (XDR *xdrs, rXY *objp)
{
	register int32_t *buf;

	 if (!xdr_array (xdrs, (char **)&objp->prod.prod_val, (u_int *) &objp->prod.prod_len, 100,
		sizeof (float), (xdrproc_t) xdr_float))
		 return FALSE;
	return TRUE;
}
