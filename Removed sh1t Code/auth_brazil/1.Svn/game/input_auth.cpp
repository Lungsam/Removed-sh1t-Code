find and delete:

#include "auth_brazil.h"

find and delete:

	// BRAZIL_AUTH
	if (LC_IsBrazil() && !test_server)
	{
		int result = auth_brazil(login, passwd);

		switch (result)
		{
			case AUTH_BRAZIL_SERVER_ERR:
			case AUTH_BRAZIL_NOID:
				LoginFailure(d, "NOID");
				return;
			case AUTH_BRAZIL_WRONGPWD:
				LoginFailure(d, "WRONGPWD");
				return;
			case AUTH_BRAZIL_FLASHUSER:
				LoginFailure(d, "FLASH");
				return;
		}
	}