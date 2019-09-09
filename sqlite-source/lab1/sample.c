#include <stdio.h>
#include <sqlite3.h>

static int callback(void *notUsed , int ncols, char **values, char ** headers) {
	// TODO: make callback function

	int i;

	return 0;
}

int main (int argc, char** argv) {	

	sqlite3 *db;  // database object 
	char *zErrMsg = 0; // save error msg 
	int ret;

	if (argc != 3) {
		fprintf(stderr, "Useage: %s DATABASE_NAME SQL_STATEMENT\n", argv[0]);

		return 1;
	}

	// TODO: open database - sqlite3_open

	if (ret) {
		fprintf(stderr, "Can't Open database: %s\n", sqlite3_errmsg(db));
		sqlite3_close(db);
		return 1;
	}

	// TODO: issue query - sqlite3_exec
	
	if (ret) {
		fprintf(stderr, "SQL error : %s\n", zErrMsg);
		sqlite3_free(zErrMsg);
	}

	// TODO: close database - sqlite3_close

	return 0;
}
