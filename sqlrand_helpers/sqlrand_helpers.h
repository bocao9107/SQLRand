/*
 * Copyright (c) 2014, Columbia University
 * All rights reserved.
 *
 * This software was developed by Theofilos Petsios <theofilos@cs.columbia.edu>
 * at Columbia University, New York, NY, USA, in September 2014.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *   * Neither the name of Columbia University nor the
 *     names of its contributors may be used to endorse or promote products
 *     derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#include <boost/algorithm/string.hpp>
const char *MYSQL_MAPPING_FILE = "/tmp/.sqlrand_mysql";
const char *PGSQL_MAPPING_FILE = "/tmp/.sqlrand_pgsql";
const char *SS_TC_ROOT         = "SS_TC_ROOT";
const char *TMP_FILE           = "/tmp";

const char *MYSQL_KEYWORDS[] = {"ADD", "ALL", "ALTER", "ANALYZE" ,
	"AND", "AS", "ASC", "ASENSITIVE", "BEFORE", "BETWEEN", "BIGINT" ,
	"BINARY", "BLOB", "BOTH", "BY", "CALL", "CASCADE", "CASE", "CHANGE" ,
	"CHAR", "CHARACTER", "CHECK", "COLLATE", "COLUMN", "CONDITION" ,
	"CONSTRAINT", "CONTINUE", "CONVERT", "CREATE", "CROSS", "CURRENT_DATE",
	"CURRENT_TIME", "CURRENT_TIMESTAMP", "CURRENT_USER", "CURSOR" ,
	"DATABASE", "DATABASES", "DAY_HOUR", "DAY_MICROSECOND", "DAY_MINUTE" ,
	"DAY_SECOND", "DEC", "DECIMAL", "DECLARE", "DEFAULT", "DELAYED" ,
	"DELETE", "DESC", "DESCRIBE", "DETERMINISTIC", "DISTINCT" ,
	"DISTINCTROW", "DIV", "DOUBLE", "DROP", "DUAL", "EACH", "ELSE" ,
	"ELSEIF", "ENCLOSED", "ESCAPED", "EXISTS", "EXIT", "EXPLAIN", "FALSE",
	"FETCH", ", word);FLOAT", "FLOAT4", "FLOAT8", "FOR", "FORCE", "FOREIGN",
	"FROM", "FULLTEXT", "GRANT", "GROUP", "HAVING", "HIGH_PRIORITY" ,
	"HOUR_MICROSECOND", "HOUR_MINUTE", "HOUR_SECOND", "IF", "IGNORE", "IN",
	"INDEX", "INFILE", "INNER", "INOUT", "INSENSITIVE", "INSERT" ,
	"INT", "INT1", "INT2", "INT3", "INT4", "INT8", "INTEGER", "INTERVAL",
	"INTO", "IS", "ITERATE", "JOIN", "KEY", "KEYS", "KILL" ,
	"LEADING", "LEAVE", "LEFT", "LIKE", "LIMIT", "LINES", "LOAD" ,
	"LOCALTIME", "LOCALTIMESTAMP", "LOCK", "LONG", "LONGBLOB", "LONGTEXT" ,
	"LOOP", "LOW_PRIORITY", "MATCH", "MEDIUMBLOB", "MEDIUMINT" ,
	"MEDIUMTEXT", "MIDDLEINT", "MINUTE_MICROSECOND", "MINUTE_SECOND", "MOD",
	"MODIFIES", "NATURAL", "NOT", "NO_WRITE_TO_BINLOG", "NULL" ,
	"NUMERIC", "ON", "OPTIMIZE", "OPTION", "OPTIONALLY", "OR", "ORDER" ,
	"OUT", "OUTER", "OUTFILE", "PRECISION", "PRIMARY", "PROCEDURE" ,
	"PURGE", "READ", "READS", "REAL", "REFERENCES", "REGEXP", "RELEASE" ,
	"RENAME", "REPEAT", "REPLACE", "REQUIRE", "RESTRICT", "RETURN" ,
	"REVOKE", "RIGHT", "RLIKE", "SCHEMA", "SCHEMAS", "SECOND_MICROSECOND" ,
	"SELECT", "SENSITIVE", "SEPARATOR", "SET", "SHOW", "SMALLINT" ,
	"SONAME", "SPATIAL", "SPECIFIC", "SQL", "SQLEXCEPTION", "SQLSTATE",
	"SQLWARNING", "SQL_BIG_RESULT", "SQL_CALC_FOUND_ROWS", "SQL_SMALL_RESULT",
	"SSL", "STARTING", "STRAIGHT_JOIN", "TABLE", "TERMINATED", "THEN",
	"TINYBLOB", "TINYINT", "TINYTEXT", "TO", "TRAILING", "TRIGGER", "TRUE",
	"UNDO", "UNION UNIQUE", "UNLOCK", "UNSIGNED", "UPDATE", "USAGE", "USE",
	"USING", "UTC_DATE", "UTC_TIME", "UTC_TIMESTAMP", "VALUES", "VARBINARY",
	"VARCHAR", "VARCHARACTER", "VARYING", "WHEN", "WHERE", "WHILE", "WITH",
	"WRITE", "XOR", "YEAR_MONTH", "ZEROFILL", NULL};


const char *PSQL_KEYWORDS[] = {
	"ABORT_P", "ABSOLUTE_P", "ACCESS", "ACTION", "ADD_P", "ADMIN", "AFTER",
	"AGGREGATE", "ALL", "ALSO", "ALTER", "ALWAYS", "ANALYSE", "ANALYZE", "AND",
	"ANY", "ARRAY", "AS", "ASC", "ASSERTION", "ASSIGNMENT", "ASYMMETRIC", "AT",
	"ATTRIBUTE", "AUTHORIZATION", "BACKWARD", "BEFORE", "BEGIN_P", "BETWEEN",
	"BIGINT", "BINARY", "BIT", "BOOLEAN_P", "BOTH", "BY", "CACHE", "CALLED",
	"CASCADE", "CASCADED", "CASE", "CAST", "CATALOG_P", "CHAIN", "CHAR_P",
	"CHARACTER", "CHARACTERISTICS", "CHECK", "CHECKPOINT", "CLASS", "CLOSE",
	"CLUSTER", "COALESCE", "COLLATE", "COLLATION", "COLUMN", "COMMENT",
	"COMMENTS", "COMMIT", "COMMITTED", "CONCURRENTLY", "CONFIGURATION",
	"CONNECTION", "CONSTRAINT", "CONSTRAINTS", "CONTENT_P", "CONTINUE_P",
	"CONVERSION_P", "COPY", "COST", "CREATE", "CROSS", "CSV", "CURRENT_P",
	"CURRENT_CATALOG", "CURRENT_DATE", "CURRENT_ROLE", "CURRENT_SCHEMA",
	"CURRENT_TIME", "CURRENT_TIMESTAMP", "CURRENT_USER", "CURSOR", "CYCLE",
	"DATA_P", "DATABASE", "DAY_P", "DEALLOCATE", "DEC", "DECIMAL_P", "DECLARE",
	"DEFAULT", "DEFAULTS", "DEFERRABLE", "DEFERRED", "DEFINER", "DELETE_P",
	"DELIMITER", "DELIMITERS", "DESC", "DICTIONARY", "DISABLE_P", "DISCARD",
	"DISTINCT", "DO", "DOCUMENT_P", "DOMAIN_P", "DOUBLE_P", "DROP", "EACH",
	"ELSE", "ENABLE_P", "ENCODING", "ENCRYPTED", "END_P", "ENUM_P", "ESCAPE",
	"EVENT", "EXCEPT", "EXCLUDE", "EXCLUDING", "EXCLUSIVE", "EXECUTE", "EXISTS",
	"EXPLAIN", "EXTENSION", "EXTERNAL", "EXTRACT", "FALSE_P", "FAMILY", "FETCH",
	"FILTER", "FIRST_P", "FLOAT_P", "FOLLOWING", "FOR", "FORCE", "FOREIGN",
	"FORWARD", "FREEZE", "FROM", "FULL", "FUNCTION", "FUNCTIONS", "GLOBAL",
	"GRANT", "GRANTED", "GREATEST", "GROUP_P", "HANDLER", "HAVING", "HEADER_P",
	"HOLD", "HOUR_P", "IDENTITY_P", "IF_P", "ILIKE", "IMMEDIATE", "IMMUTABLE",
	"IMPLICIT_P", "IMPORT_P", "IN_P", "INCLUDING", "INCREMENT", "INDEX",
	"INDEXES", "INHERIT", "INHERITS", "INITIALLY", "INLINE_P", "INNER_P",
	"INOUT", "INPUT_P", "INSENSITIVE", "INSERT", "INSTEAD", "INT_P", "INTEGER",
	"INTERSECT", "INTERVAL", "INTO", "INVOKER", "IS", "ISNULL", "ISOLATION",
	"JOIN", "KEY", "LABEL", "LANGUAGE", "LARGE_P", "LAST_P", "LATERAL_P",
	"LEADING", "LEAKPROOF", "LEAST", "LEFT", "LEVEL", "LIKE", "LIMIT", "LISTEN",
	"LOAD", "LOCAL", "LOCALTIME", "LOCALTIMESTAMP", "LOCATION", "LOCK_P",
	"LOGGED", "MAPPING", "MATCH", "MATERIALIZED", "MAXVALUE", "MINUTE_P",
	"MINVALUE", "MODE", "MONTH_P", "MOVE", "NAME_P", "NAMES", "NATIONAL",
	"NATURAL", "NCHAR", "NEXT", "NO", "NONE", "NOT", "NOTHING", "NOTIFY",
	"NOTNULL", "NOWAIT", "NULL_P", "NULLIF", "NULLS_P", "NUMERIC", "OBJECT_P",
	"OF", "OFF", "OFFSET", "OIDS", "ON", "ONLY", "OPERATOR", "OPTION",
	"OPTIONS", "OR", "ORDER", "ORDINALITY", "OUT_P", "OUTER_P", "OVER",
	"OVERLAPS", "OVERLAY", "OWNED", "OWNER", "PARSER", "PARTIAL", "PARTITION",
	"PASSING", "PASSWORD", "PLACING", "PLANS", "POSITION", "PRECEDING",
	"PRECISION", "PRESERVE", "PREPARE", "PREPARED", "PRIMARY", "PRIOR",
	"PRIVILEGES", "PROCEDURAL", "PROCEDURE", "PROGRAM", "QUOTE", "RANGE",
	"READ", "REAL", "REASSIGN", "RECHECK", "RECURSIVE", "REF", "REFERENCES",
	"REFRESH", "REINDEX", "RELATIVE_P", "RELEASE", "RENAME", "REPEATABLE",
	"REPLACE", "REPLICA", "RESET", "RESTART", "RESTRICT", "RETURNING",
	"RETURNS", "REVOKE", "RIGHT", "ROLE", "ROLLBACK", "ROW", "ROWS", "RULE",
	"SAVEPOINT", "SCHEMA", "SCROLL", "SEARCH", "SECOND_P", "SECURITY", "SELECT",
	"SEQUENCE", "SEQUENCES", "SERIALIZABLE", "SERVER", "SESSION",
	"SESSION_USER", "SET", "SETOF", "SHARE", "SHOW", "SIMILAR", "SIMPLE",
	"SMALLINT", "SNAPSHOT", "SOME", "STABLE", "STANDALONE_P", "START",
	"STATEMENT", "STATISTICS", "STDIN", "STDOUT", "STORAGE", "STRICT_P",
	"STRIP_P", "SUBSTRING", "SYMMETRIC", "SYSID", "SYSTEM_P", "TABLE", "TABLES",
	"TABLESPACE", "TEMP", "TEMPLATE", "TEMPORARY", "TEXT_P", "THEN", "TIME",
	"TIMESTAMP", "TO", "TRAILING", "TRANSACTION", "TREAT", "TRIGGER", "TRIM",
	"TRUE_P", "TRUNCATE", "TRUSTED", "TYPE_P", "TYPES_P", "UNBOUNDED",
	"UNCOMMITTED", "UNENCRYPTED", "UNION", "UNIQUE", "UNKNOWN", "UNLISTEN",
	"UNLOGGED", "UNTIL", "UPDATE", "USER", "USING", "VACUUM", "VALID",
	"VALIDATE", "VALIDATOR", "VALUE_P", "VALUES", "VARCHAR", "VARIADIC",
	"VARYING", "VERBOSE", "VERSION_P", "VIEW", "VIEWS", "VOLATILE", "WHEN",
	"WHERE", "WHITESPACE_P", "WINDOW", "WITH", "WITHIN", "WITHOUT", "WORK",
	"WRAPPER", "WRITE", "XML_P", "XMLATTRIBUTES", "XMLCONCAT", "XMLELEMENT",
	"XMLEXISTS", "XMLFOREST", "XMLPARSE", "XMLPI", "XMLROOT", "XMLSERIALIZE",
	"YEAR_P", "YES_P", "ZONE", NULL};

int isKeyword(char *word, int type);
void convert_to_plaintext(char *msg, int type);
void log_exit(char *input);
void get_plaintext_from_string(char *input, int type);

int __sqlrand_mysql_real_query(MYSQL *sql, const char *in, unsigned long len);
int __sqlrand_mysql_query(MYSQL *mysql, const char *input);

PGresult *
__sqlrand_PQexec(PGconn *conn, const char *input);
