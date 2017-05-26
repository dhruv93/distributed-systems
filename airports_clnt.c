/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include <memory.h> /* for memset */
#include "airports.h"

/* Default timeout can be changed using clnt_control() */
static struct timeval TIMEOUT = { 25, 0 };

airport_list *
airports_1(struct position *argp, CLIENT *clnt)
{
	static airport_list clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, AIRPORTS,
		(xdrproc_t) xdr_position, (caddr_t) argp,
		(xdrproc_t) xdr_airport_list, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}
