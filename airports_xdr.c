/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "airports.h"

bool_t
xdr_word (XDR *xdrs, word *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, objp, MAXWORDLEN))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_cod (XDR *xdrs, cod *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, objp, MAXCODLEN))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_airportlist (XDR *xdrs, airportlist *objp)
{
	register int32_t *buf;

	 if (!xdr_pointer (xdrs, (char **)objp, sizeof (struct airportstruct), (xdrproc_t) xdr_airportstruct))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_airportstruct (XDR *xdrs, airportstruct *objp)
{
	register int32_t *buf;

	 if (!xdr_word (xdrs, &objp->name))
		 return FALSE;
	 if (!xdr_cod (xdrs, &objp->code))
		 return FALSE;
	 if (!xdr_double (xdrs, &objp->distance))
		 return FALSE;
	 if (!xdr_airportlist (xdrs, &objp->next))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_position (XDR *xdrs, position *objp)
{
	register int32_t *buf;

	 if (!xdr_double (xdrs, &objp->latitude))
		 return FALSE;
	 if (!xdr_double (xdrs, &objp->longitude))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_airport_list (XDR *xdrs, airport_list *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->errno))
		 return FALSE;
	switch (objp->errno) {
	case 0:
		 if (!xdr_airportlist (xdrs, &objp->airport_list_u.list))
			 return FALSE;
		break;
	default:
		break;
	}
	return TRUE;
}