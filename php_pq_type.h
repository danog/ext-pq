#ifndef PHP_PQ_TYPE
# define PHP_PQ_TYPE(t,o)
#endif
#ifndef PHP_PQ_OID_BOOL
# define PHP_PQ_OID_BOOL 16
#endif
PHP_PQ_TYPE("BOOL", 16)
#ifndef PHP_PQ_OID_BYTEA
# define PHP_PQ_OID_BYTEA 17
#endif
PHP_PQ_TYPE("BYTEA", 17)
#ifndef PHP_PQ_OID_CHAR
# define PHP_PQ_OID_CHAR 18
#endif
PHP_PQ_TYPE("CHAR", 18)
#ifndef PHP_PQ_OID_NAME
# define PHP_PQ_OID_NAME 19
#endif
PHP_PQ_TYPE("NAME", 19)
#ifndef PHP_PQ_OID_INT8
# define PHP_PQ_OID_INT8 20
#endif
PHP_PQ_TYPE("INT8", 20)
#ifndef PHP_PQ_OID_INT2
# define PHP_PQ_OID_INT2 21
#endif
PHP_PQ_TYPE("INT2", 21)
#ifndef PHP_PQ_OID_INT2VECTOR
# define PHP_PQ_OID_INT2VECTOR 22
#endif
PHP_PQ_TYPE("INT2VECTOR", 22)
#ifndef PHP_PQ_OID_INT4
# define PHP_PQ_OID_INT4 23
#endif
PHP_PQ_TYPE("INT4", 23)
#ifndef PHP_PQ_OID_REGPROC
# define PHP_PQ_OID_REGPROC 24
#endif
PHP_PQ_TYPE("REGPROC", 24)
#ifndef PHP_PQ_OID_TEXT
# define PHP_PQ_OID_TEXT 25
#endif
PHP_PQ_TYPE("TEXT", 25)
#ifndef PHP_PQ_OID_OID
# define PHP_PQ_OID_OID 26
#endif
PHP_PQ_TYPE("OID", 26)
#ifndef PHP_PQ_OID_TID
# define PHP_PQ_OID_TID 27
#endif
PHP_PQ_TYPE("TID", 27)
#ifndef PHP_PQ_OID_XID
# define PHP_PQ_OID_XID 28
#endif
PHP_PQ_TYPE("XID", 28)
#ifndef PHP_PQ_OID_CID
# define PHP_PQ_OID_CID 29
#endif
PHP_PQ_TYPE("CID", 29)
#ifndef PHP_PQ_OID_OIDVECTOR
# define PHP_PQ_OID_OIDVECTOR 30
#endif
PHP_PQ_TYPE("OIDVECTOR", 30)
#ifndef PHP_PQ_OID_PG_TYPE
# define PHP_PQ_OID_PG_TYPE 71
#endif
PHP_PQ_TYPE("PG_TYPE", 71)
#ifndef PHP_PQ_OID_PG_ATTRIBUTE
# define PHP_PQ_OID_PG_ATTRIBUTE 75
#endif
PHP_PQ_TYPE("PG_ATTRIBUTE", 75)
#ifndef PHP_PQ_OID_PG_PROC
# define PHP_PQ_OID_PG_PROC 81
#endif
PHP_PQ_TYPE("PG_PROC", 81)
#ifndef PHP_PQ_OID_PG_CLASS
# define PHP_PQ_OID_PG_CLASS 83
#endif
PHP_PQ_TYPE("PG_CLASS", 83)
#ifndef PHP_PQ_OID_JSON
# define PHP_PQ_OID_JSON 114
#endif
PHP_PQ_TYPE("JSON", 114)
#ifndef PHP_PQ_OID_XML
# define PHP_PQ_OID_XML 142
#endif
PHP_PQ_TYPE("XML", 142)
#ifndef PHP_PQ_OID_XMLARRAY
# define PHP_PQ_OID_XMLARRAY 143
#endif
PHP_PQ_TYPE("XMLARRAY", 143)
#ifndef PHP_PQ_OID_JSONARRAY
# define PHP_PQ_OID_JSONARRAY 199
#endif
PHP_PQ_TYPE("JSONARRAY", 199)
#ifndef PHP_PQ_OID_PG_NODE_TREE
# define PHP_PQ_OID_PG_NODE_TREE 194
#endif
PHP_PQ_TYPE("PG_NODE_TREE", 194)
#ifndef PHP_PQ_OID_PG_DDL_COMMAND
# define PHP_PQ_OID_PG_DDL_COMMAND 32
#endif
PHP_PQ_TYPE("PG_DDL_COMMAND", 32)
#ifndef PHP_PQ_OID_SMGR
# define PHP_PQ_OID_SMGR 210
#endif
PHP_PQ_TYPE("SMGR", 210)
#ifndef PHP_PQ_OID_POINT
# define PHP_PQ_OID_POINT 600
#endif
PHP_PQ_TYPE("POINT", 600)
#ifndef PHP_PQ_OID_LSEG
# define PHP_PQ_OID_LSEG 601
#endif
PHP_PQ_TYPE("LSEG", 601)
#ifndef PHP_PQ_OID_PATH
# define PHP_PQ_OID_PATH 602
#endif
PHP_PQ_TYPE("PATH", 602)
#ifndef PHP_PQ_OID_BOX
# define PHP_PQ_OID_BOX 603
#endif
PHP_PQ_TYPE("BOX", 603)
#ifndef PHP_PQ_OID_POLYGON
# define PHP_PQ_OID_POLYGON 604
#endif
PHP_PQ_TYPE("POLYGON", 604)
#ifndef PHP_PQ_OID_LINE
# define PHP_PQ_OID_LINE 628
#endif
PHP_PQ_TYPE("LINE", 628)
#ifndef PHP_PQ_OID_LINEARRAY
# define PHP_PQ_OID_LINEARRAY 629
#endif
PHP_PQ_TYPE("LINEARRAY", 629)
#ifndef PHP_PQ_OID_FLOAT4
# define PHP_PQ_OID_FLOAT4 700
#endif
PHP_PQ_TYPE("FLOAT4", 700)
#ifndef PHP_PQ_OID_FLOAT8
# define PHP_PQ_OID_FLOAT8 701
#endif
PHP_PQ_TYPE("FLOAT8", 701)
#ifndef PHP_PQ_OID_ABSTIME
# define PHP_PQ_OID_ABSTIME 702
#endif
PHP_PQ_TYPE("ABSTIME", 702)
#ifndef PHP_PQ_OID_RELTIME
# define PHP_PQ_OID_RELTIME 703
#endif
PHP_PQ_TYPE("RELTIME", 703)
#ifndef PHP_PQ_OID_TINTERVAL
# define PHP_PQ_OID_TINTERVAL 704
#endif
PHP_PQ_TYPE("TINTERVAL", 704)
#ifndef PHP_PQ_OID_UNKNOWN
# define PHP_PQ_OID_UNKNOWN 705
#endif
PHP_PQ_TYPE("UNKNOWN", 705)
#ifndef PHP_PQ_OID_CIRCLE
# define PHP_PQ_OID_CIRCLE 718
#endif
PHP_PQ_TYPE("CIRCLE", 718)
#ifndef PHP_PQ_OID_CIRCLEARRAY
# define PHP_PQ_OID_CIRCLEARRAY 719
#endif
PHP_PQ_TYPE("CIRCLEARRAY", 719)
#ifndef PHP_PQ_OID_MONEY
# define PHP_PQ_OID_MONEY 790
#endif
PHP_PQ_TYPE("MONEY", 790)
#ifndef PHP_PQ_OID_MONEYARRAY
# define PHP_PQ_OID_MONEYARRAY 791
#endif
PHP_PQ_TYPE("MONEYARRAY", 791)
#ifndef PHP_PQ_OID_MACADDR
# define PHP_PQ_OID_MACADDR 829
#endif
PHP_PQ_TYPE("MACADDR", 829)
#ifndef PHP_PQ_OID_INET
# define PHP_PQ_OID_INET 869
#endif
PHP_PQ_TYPE("INET", 869)
#ifndef PHP_PQ_OID_CIDR
# define PHP_PQ_OID_CIDR 650
#endif
PHP_PQ_TYPE("CIDR", 650)
#ifndef PHP_PQ_OID_BOOLARRAY
# define PHP_PQ_OID_BOOLARRAY 1000
#endif
PHP_PQ_TYPE("BOOLARRAY", 1000)
#ifndef PHP_PQ_OID_BYTEAARRAY
# define PHP_PQ_OID_BYTEAARRAY 1001
#endif
PHP_PQ_TYPE("BYTEAARRAY", 1001)
#ifndef PHP_PQ_OID_CHARARRAY
# define PHP_PQ_OID_CHARARRAY 1002
#endif
PHP_PQ_TYPE("CHARARRAY", 1002)
#ifndef PHP_PQ_OID_NAMEARRAY
# define PHP_PQ_OID_NAMEARRAY 1003
#endif
PHP_PQ_TYPE("NAMEARRAY", 1003)
#ifndef PHP_PQ_OID_INT2ARRAY
# define PHP_PQ_OID_INT2ARRAY 1005
#endif
PHP_PQ_TYPE("INT2ARRAY", 1005)
#ifndef PHP_PQ_OID_INT2VECTORARRAY
# define PHP_PQ_OID_INT2VECTORARRAY 1006
#endif
PHP_PQ_TYPE("INT2VECTORARRAY", 1006)
#ifndef PHP_PQ_OID_INT4ARRAY
# define PHP_PQ_OID_INT4ARRAY 1007
#endif
PHP_PQ_TYPE("INT4ARRAY", 1007)
#ifndef PHP_PQ_OID_REGPROCARRAY
# define PHP_PQ_OID_REGPROCARRAY 1008
#endif
PHP_PQ_TYPE("REGPROCARRAY", 1008)
#ifndef PHP_PQ_OID_TEXTARRAY
# define PHP_PQ_OID_TEXTARRAY 1009
#endif
PHP_PQ_TYPE("TEXTARRAY", 1009)
#ifndef PHP_PQ_OID_OIDARRAY
# define PHP_PQ_OID_OIDARRAY 1028
#endif
PHP_PQ_TYPE("OIDARRAY", 1028)
#ifndef PHP_PQ_OID_TIDARRAY
# define PHP_PQ_OID_TIDARRAY 1010
#endif
PHP_PQ_TYPE("TIDARRAY", 1010)
#ifndef PHP_PQ_OID_XIDARRAY
# define PHP_PQ_OID_XIDARRAY 1011
#endif
PHP_PQ_TYPE("XIDARRAY", 1011)
#ifndef PHP_PQ_OID_CIDARRAY
# define PHP_PQ_OID_CIDARRAY 1012
#endif
PHP_PQ_TYPE("CIDARRAY", 1012)
#ifndef PHP_PQ_OID_OIDVECTORARRAY
# define PHP_PQ_OID_OIDVECTORARRAY 1013
#endif
PHP_PQ_TYPE("OIDVECTORARRAY", 1013)
#ifndef PHP_PQ_OID_BPCHARARRAY
# define PHP_PQ_OID_BPCHARARRAY 1014
#endif
PHP_PQ_TYPE("BPCHARARRAY", 1014)
#ifndef PHP_PQ_OID_VARCHARARRAY
# define PHP_PQ_OID_VARCHARARRAY 1015
#endif
PHP_PQ_TYPE("VARCHARARRAY", 1015)
#ifndef PHP_PQ_OID_INT8ARRAY
# define PHP_PQ_OID_INT8ARRAY 1016
#endif
PHP_PQ_TYPE("INT8ARRAY", 1016)
#ifndef PHP_PQ_OID_POINTARRAY
# define PHP_PQ_OID_POINTARRAY 1017
#endif
PHP_PQ_TYPE("POINTARRAY", 1017)
#ifndef PHP_PQ_OID_LSEGARRAY
# define PHP_PQ_OID_LSEGARRAY 1018
#endif
PHP_PQ_TYPE("LSEGARRAY", 1018)
#ifndef PHP_PQ_OID_PATHARRAY
# define PHP_PQ_OID_PATHARRAY 1019
#endif
PHP_PQ_TYPE("PATHARRAY", 1019)
#ifndef PHP_PQ_OID_BOXARRAY
# define PHP_PQ_OID_BOXARRAY 1020
#endif
PHP_PQ_TYPE("BOXARRAY", 1020)
#ifndef PHP_PQ_OID_FLOAT4ARRAY
# define PHP_PQ_OID_FLOAT4ARRAY 1021
#endif
PHP_PQ_TYPE("FLOAT4ARRAY", 1021)
#ifndef PHP_PQ_OID_FLOAT8ARRAY
# define PHP_PQ_OID_FLOAT8ARRAY 1022
#endif
PHP_PQ_TYPE("FLOAT8ARRAY", 1022)
#ifndef PHP_PQ_OID_ABSTIMEARRAY
# define PHP_PQ_OID_ABSTIMEARRAY 1023
#endif
PHP_PQ_TYPE("ABSTIMEARRAY", 1023)
#ifndef PHP_PQ_OID_RELTIMEARRAY
# define PHP_PQ_OID_RELTIMEARRAY 1024
#endif
PHP_PQ_TYPE("RELTIMEARRAY", 1024)
#ifndef PHP_PQ_OID_TINTERVALARRAY
# define PHP_PQ_OID_TINTERVALARRAY 1025
#endif
PHP_PQ_TYPE("TINTERVALARRAY", 1025)
#ifndef PHP_PQ_OID_POLYGONARRAY
# define PHP_PQ_OID_POLYGONARRAY 1027
#endif
PHP_PQ_TYPE("POLYGONARRAY", 1027)
#ifndef PHP_PQ_OID_ACLITEM
# define PHP_PQ_OID_ACLITEM 1033
#endif
PHP_PQ_TYPE("ACLITEM", 1033)
#ifndef PHP_PQ_OID_ACLITEMARRAY
# define PHP_PQ_OID_ACLITEMARRAY 1034
#endif
PHP_PQ_TYPE("ACLITEMARRAY", 1034)
#ifndef PHP_PQ_OID_MACADDRARRAY
# define PHP_PQ_OID_MACADDRARRAY 1040
#endif
PHP_PQ_TYPE("MACADDRARRAY", 1040)
#ifndef PHP_PQ_OID_INETARRAY
# define PHP_PQ_OID_INETARRAY 1041
#endif
PHP_PQ_TYPE("INETARRAY", 1041)
#ifndef PHP_PQ_OID_CIDRARRAY
# define PHP_PQ_OID_CIDRARRAY 651
#endif
PHP_PQ_TYPE("CIDRARRAY", 651)
#ifndef PHP_PQ_OID_CSTRINGARRAY
# define PHP_PQ_OID_CSTRINGARRAY 1263
#endif
PHP_PQ_TYPE("CSTRINGARRAY", 1263)
#ifndef PHP_PQ_OID_BPCHAR
# define PHP_PQ_OID_BPCHAR 1042
#endif
PHP_PQ_TYPE("BPCHAR", 1042)
#ifndef PHP_PQ_OID_VARCHAR
# define PHP_PQ_OID_VARCHAR 1043
#endif
PHP_PQ_TYPE("VARCHAR", 1043)
#ifndef PHP_PQ_OID_DATE
# define PHP_PQ_OID_DATE 1082
#endif
PHP_PQ_TYPE("DATE", 1082)
#ifndef PHP_PQ_OID_TIME
# define PHP_PQ_OID_TIME 1083
#endif
PHP_PQ_TYPE("TIME", 1083)
#ifndef PHP_PQ_OID_TIMESTAMP
# define PHP_PQ_OID_TIMESTAMP 1114
#endif
PHP_PQ_TYPE("TIMESTAMP", 1114)
#ifndef PHP_PQ_OID_TIMESTAMPARRAY
# define PHP_PQ_OID_TIMESTAMPARRAY 1115
#endif
PHP_PQ_TYPE("TIMESTAMPARRAY", 1115)
#ifndef PHP_PQ_OID_DATEARRAY
# define PHP_PQ_OID_DATEARRAY 1182
#endif
PHP_PQ_TYPE("DATEARRAY", 1182)
#ifndef PHP_PQ_OID_TIMEARRAY
# define PHP_PQ_OID_TIMEARRAY 1183
#endif
PHP_PQ_TYPE("TIMEARRAY", 1183)
#ifndef PHP_PQ_OID_TIMESTAMPTZ
# define PHP_PQ_OID_TIMESTAMPTZ 1184
#endif
PHP_PQ_TYPE("TIMESTAMPTZ", 1184)
#ifndef PHP_PQ_OID_TIMESTAMPTZARRAY
# define PHP_PQ_OID_TIMESTAMPTZARRAY 1185
#endif
PHP_PQ_TYPE("TIMESTAMPTZARRAY", 1185)
#ifndef PHP_PQ_OID_INTERVAL
# define PHP_PQ_OID_INTERVAL 1186
#endif
PHP_PQ_TYPE("INTERVAL", 1186)
#ifndef PHP_PQ_OID_INTERVALARRAY
# define PHP_PQ_OID_INTERVALARRAY 1187
#endif
PHP_PQ_TYPE("INTERVALARRAY", 1187)
#ifndef PHP_PQ_OID_NUMERICARRAY
# define PHP_PQ_OID_NUMERICARRAY 1231
#endif
PHP_PQ_TYPE("NUMERICARRAY", 1231)
#ifndef PHP_PQ_OID_TIMETZ
# define PHP_PQ_OID_TIMETZ 1266
#endif
PHP_PQ_TYPE("TIMETZ", 1266)
#ifndef PHP_PQ_OID_TIMETZARRAY
# define PHP_PQ_OID_TIMETZARRAY 1270
#endif
PHP_PQ_TYPE("TIMETZARRAY", 1270)
#ifndef PHP_PQ_OID_BIT
# define PHP_PQ_OID_BIT 1560
#endif
PHP_PQ_TYPE("BIT", 1560)
#ifndef PHP_PQ_OID_BITARRAY
# define PHP_PQ_OID_BITARRAY 1561
#endif
PHP_PQ_TYPE("BITARRAY", 1561)
#ifndef PHP_PQ_OID_VARBIT
# define PHP_PQ_OID_VARBIT 1562
#endif
PHP_PQ_TYPE("VARBIT", 1562)
#ifndef PHP_PQ_OID_VARBITARRAY
# define PHP_PQ_OID_VARBITARRAY 1563
#endif
PHP_PQ_TYPE("VARBITARRAY", 1563)
#ifndef PHP_PQ_OID_NUMERIC
# define PHP_PQ_OID_NUMERIC 1700
#endif
PHP_PQ_TYPE("NUMERIC", 1700)
#ifndef PHP_PQ_OID_REFCURSOR
# define PHP_PQ_OID_REFCURSOR 1790
#endif
PHP_PQ_TYPE("REFCURSOR", 1790)
#ifndef PHP_PQ_OID_REFCURSORARRAY
# define PHP_PQ_OID_REFCURSORARRAY 2201
#endif
PHP_PQ_TYPE("REFCURSORARRAY", 2201)
#ifndef PHP_PQ_OID_REGPROCEDURE
# define PHP_PQ_OID_REGPROCEDURE 2202
#endif
PHP_PQ_TYPE("REGPROCEDURE", 2202)
#ifndef PHP_PQ_OID_REGOPER
# define PHP_PQ_OID_REGOPER 2203
#endif
PHP_PQ_TYPE("REGOPER", 2203)
#ifndef PHP_PQ_OID_REGOPERATOR
# define PHP_PQ_OID_REGOPERATOR 2204
#endif
PHP_PQ_TYPE("REGOPERATOR", 2204)
#ifndef PHP_PQ_OID_REGCLASS
# define PHP_PQ_OID_REGCLASS 2205
#endif
PHP_PQ_TYPE("REGCLASS", 2205)
#ifndef PHP_PQ_OID_REGTYPE
# define PHP_PQ_OID_REGTYPE 2206
#endif
PHP_PQ_TYPE("REGTYPE", 2206)
#ifndef PHP_PQ_OID_REGROLE
# define PHP_PQ_OID_REGROLE 4096
#endif
PHP_PQ_TYPE("REGROLE", 4096)
#ifndef PHP_PQ_OID_REGNAMESPACE
# define PHP_PQ_OID_REGNAMESPACE 4089
#endif
PHP_PQ_TYPE("REGNAMESPACE", 4089)
#ifndef PHP_PQ_OID_REGPROCEDUREARRAY
# define PHP_PQ_OID_REGPROCEDUREARRAY 2207
#endif
PHP_PQ_TYPE("REGPROCEDUREARRAY", 2207)
#ifndef PHP_PQ_OID_REGOPERARRAY
# define PHP_PQ_OID_REGOPERARRAY 2208
#endif
PHP_PQ_TYPE("REGOPERARRAY", 2208)
#ifndef PHP_PQ_OID_REGOPERATORARRAY
# define PHP_PQ_OID_REGOPERATORARRAY 2209
#endif
PHP_PQ_TYPE("REGOPERATORARRAY", 2209)
#ifndef PHP_PQ_OID_REGCLASSARRAY
# define PHP_PQ_OID_REGCLASSARRAY 2210
#endif
PHP_PQ_TYPE("REGCLASSARRAY", 2210)
#ifndef PHP_PQ_OID_REGTYPEARRAY
# define PHP_PQ_OID_REGTYPEARRAY 2211
#endif
PHP_PQ_TYPE("REGTYPEARRAY", 2211)
#ifndef PHP_PQ_OID_REGROLEARRAY
# define PHP_PQ_OID_REGROLEARRAY 4097
#endif
PHP_PQ_TYPE("REGROLEARRAY", 4097)
#ifndef PHP_PQ_OID_REGNAMESPACEARRAY
# define PHP_PQ_OID_REGNAMESPACEARRAY 4090
#endif
PHP_PQ_TYPE("REGNAMESPACEARRAY", 4090)
#ifndef PHP_PQ_OID_UUID
# define PHP_PQ_OID_UUID 2950
#endif
PHP_PQ_TYPE("UUID", 2950)
#ifndef PHP_PQ_OID_UUIDARRAY
# define PHP_PQ_OID_UUIDARRAY 2951
#endif
PHP_PQ_TYPE("UUIDARRAY", 2951)
#ifndef PHP_PQ_OID_PG_LSN
# define PHP_PQ_OID_PG_LSN 3220
#endif
PHP_PQ_TYPE("PG_LSN", 3220)
#ifndef PHP_PQ_OID_PG_LSNARRAY
# define PHP_PQ_OID_PG_LSNARRAY 3221
#endif
PHP_PQ_TYPE("PG_LSNARRAY", 3221)
#ifndef PHP_PQ_OID_TSVECTOR
# define PHP_PQ_OID_TSVECTOR 3614
#endif
PHP_PQ_TYPE("TSVECTOR", 3614)
#ifndef PHP_PQ_OID_GTSVECTOR
# define PHP_PQ_OID_GTSVECTOR 3642
#endif
PHP_PQ_TYPE("GTSVECTOR", 3642)
#ifndef PHP_PQ_OID_TSQUERY
# define PHP_PQ_OID_TSQUERY 3615
#endif
PHP_PQ_TYPE("TSQUERY", 3615)
#ifndef PHP_PQ_OID_REGCONFIG
# define PHP_PQ_OID_REGCONFIG 3734
#endif
PHP_PQ_TYPE("REGCONFIG", 3734)
#ifndef PHP_PQ_OID_REGDICTIONARY
# define PHP_PQ_OID_REGDICTIONARY 3769
#endif
PHP_PQ_TYPE("REGDICTIONARY", 3769)
#ifndef PHP_PQ_OID_TSVECTORARRAY
# define PHP_PQ_OID_TSVECTORARRAY 3643
#endif
PHP_PQ_TYPE("TSVECTORARRAY", 3643)
#ifndef PHP_PQ_OID_GTSVECTORARRAY
# define PHP_PQ_OID_GTSVECTORARRAY 3644
#endif
PHP_PQ_TYPE("GTSVECTORARRAY", 3644)
#ifndef PHP_PQ_OID_TSQUERYARRAY
# define PHP_PQ_OID_TSQUERYARRAY 3645
#endif
PHP_PQ_TYPE("TSQUERYARRAY", 3645)
#ifndef PHP_PQ_OID_REGCONFIGARRAY
# define PHP_PQ_OID_REGCONFIGARRAY 3735
#endif
PHP_PQ_TYPE("REGCONFIGARRAY", 3735)
#ifndef PHP_PQ_OID_REGDICTIONARYARRAY
# define PHP_PQ_OID_REGDICTIONARYARRAY 3770
#endif
PHP_PQ_TYPE("REGDICTIONARYARRAY", 3770)
#ifndef PHP_PQ_OID_JSONB
# define PHP_PQ_OID_JSONB 3802
#endif
PHP_PQ_TYPE("JSONB", 3802)
#ifndef PHP_PQ_OID_JSONBARRAY
# define PHP_PQ_OID_JSONBARRAY 3807
#endif
PHP_PQ_TYPE("JSONBARRAY", 3807)
#ifndef PHP_PQ_OID_TXID_SNAPSHOT
# define PHP_PQ_OID_TXID_SNAPSHOT 2970
#endif
PHP_PQ_TYPE("TXID_SNAPSHOT", 2970)
#ifndef PHP_PQ_OID_TXID_SNAPSHOTARRAY
# define PHP_PQ_OID_TXID_SNAPSHOTARRAY 2949
#endif
PHP_PQ_TYPE("TXID_SNAPSHOTARRAY", 2949)
#ifndef PHP_PQ_OID_INT4RANGE
# define PHP_PQ_OID_INT4RANGE 3904
#endif
PHP_PQ_TYPE("INT4RANGE", 3904)
#ifndef PHP_PQ_OID_INT4RANGEARRAY
# define PHP_PQ_OID_INT4RANGEARRAY 3905
#endif
PHP_PQ_TYPE("INT4RANGEARRAY", 3905)
#ifndef PHP_PQ_OID_NUMRANGE
# define PHP_PQ_OID_NUMRANGE 3906
#endif
PHP_PQ_TYPE("NUMRANGE", 3906)
#ifndef PHP_PQ_OID_NUMRANGEARRAY
# define PHP_PQ_OID_NUMRANGEARRAY 3907
#endif
PHP_PQ_TYPE("NUMRANGEARRAY", 3907)
#ifndef PHP_PQ_OID_TSRANGE
# define PHP_PQ_OID_TSRANGE 3908
#endif
PHP_PQ_TYPE("TSRANGE", 3908)
#ifndef PHP_PQ_OID_TSRANGEARRAY
# define PHP_PQ_OID_TSRANGEARRAY 3909
#endif
PHP_PQ_TYPE("TSRANGEARRAY", 3909)
#ifndef PHP_PQ_OID_TSTZRANGE
# define PHP_PQ_OID_TSTZRANGE 3910
#endif
PHP_PQ_TYPE("TSTZRANGE", 3910)
#ifndef PHP_PQ_OID_TSTZRANGEARRAY
# define PHP_PQ_OID_TSTZRANGEARRAY 3911
#endif
PHP_PQ_TYPE("TSTZRANGEARRAY", 3911)
#ifndef PHP_PQ_OID_DATERANGE
# define PHP_PQ_OID_DATERANGE 3912
#endif
PHP_PQ_TYPE("DATERANGE", 3912)
#ifndef PHP_PQ_OID_DATERANGEARRAY
# define PHP_PQ_OID_DATERANGEARRAY 3913
#endif
PHP_PQ_TYPE("DATERANGEARRAY", 3913)
#ifndef PHP_PQ_OID_INT8RANGE
# define PHP_PQ_OID_INT8RANGE 3926
#endif
PHP_PQ_TYPE("INT8RANGE", 3926)
#ifndef PHP_PQ_OID_INT8RANGEARRAY
# define PHP_PQ_OID_INT8RANGEARRAY 3927
#endif
PHP_PQ_TYPE("INT8RANGEARRAY", 3927)
#ifndef PHP_PQ_OID_RECORD
# define PHP_PQ_OID_RECORD 2249
#endif
PHP_PQ_TYPE("RECORD", 2249)
#ifndef PHP_PQ_OID_RECORDARRAY
# define PHP_PQ_OID_RECORDARRAY 2287
#endif
PHP_PQ_TYPE("RECORDARRAY", 2287)
#ifndef PHP_PQ_OID_CSTRING
# define PHP_PQ_OID_CSTRING 2275
#endif
PHP_PQ_TYPE("CSTRING", 2275)
#ifndef PHP_PQ_OID_ANY
# define PHP_PQ_OID_ANY 2276
#endif
PHP_PQ_TYPE("ANY", 2276)
#ifndef PHP_PQ_OID_ANYARRAY
# define PHP_PQ_OID_ANYARRAY 2277
#endif
PHP_PQ_TYPE("ANYARRAY", 2277)
#ifndef PHP_PQ_OID_VOID
# define PHP_PQ_OID_VOID 2278
#endif
PHP_PQ_TYPE("VOID", 2278)
#ifndef PHP_PQ_OID_TRIGGER
# define PHP_PQ_OID_TRIGGER 2279
#endif
PHP_PQ_TYPE("TRIGGER", 2279)
#ifndef PHP_PQ_OID_EVENT_TRIGGER
# define PHP_PQ_OID_EVENT_TRIGGER 3838
#endif
PHP_PQ_TYPE("EVENT_TRIGGER", 3838)
#ifndef PHP_PQ_OID_LANGUAGE_HANDLER
# define PHP_PQ_OID_LANGUAGE_HANDLER 2280
#endif
PHP_PQ_TYPE("LANGUAGE_HANDLER", 2280)
#ifndef PHP_PQ_OID_INTERNAL
# define PHP_PQ_OID_INTERNAL 2281
#endif
PHP_PQ_TYPE("INTERNAL", 2281)
#ifndef PHP_PQ_OID_OPAQUE
# define PHP_PQ_OID_OPAQUE 2282
#endif
PHP_PQ_TYPE("OPAQUE", 2282)
#ifndef PHP_PQ_OID_ANYELEMENT
# define PHP_PQ_OID_ANYELEMENT 2283
#endif
PHP_PQ_TYPE("ANYELEMENT", 2283)
#ifndef PHP_PQ_OID_ANYNONARRAY
# define PHP_PQ_OID_ANYNONARRAY 2776
#endif
PHP_PQ_TYPE("ANYNONARRAY", 2776)
#ifndef PHP_PQ_OID_ANYENUM
# define PHP_PQ_OID_ANYENUM 3500
#endif
PHP_PQ_TYPE("ANYENUM", 3500)
#ifndef PHP_PQ_OID_FDW_HANDLER
# define PHP_PQ_OID_FDW_HANDLER 3115
#endif
PHP_PQ_TYPE("FDW_HANDLER", 3115)
#ifndef PHP_PQ_OID_INDEX_AM_HANDLER
# define PHP_PQ_OID_INDEX_AM_HANDLER 325
#endif
PHP_PQ_TYPE("INDEX_AM_HANDLER", 325)
#ifndef PHP_PQ_OID_TSM_HANDLER
# define PHP_PQ_OID_TSM_HANDLER 3310
#endif
PHP_PQ_TYPE("TSM_HANDLER", 3310)
#ifndef PHP_PQ_OID_ANYRANGE
# define PHP_PQ_OID_ANYRANGE 3831
#endif
PHP_PQ_TYPE("ANYRANGE", 3831)
#ifndef PHP_PQ_TYPE_IS_ARRAY
# define PHP_PQ_TYPE_IS_ARRAY(oid) (\
		0 \
	||	((oid) == 143) \
	||	((oid) == 199) \
	||	((oid) == 629) \
	||	((oid) == 651) \
	||	((oid) == 719) \
	||	((oid) == 791) \
	||	((oid) == 1000) \
	||	((oid) == 1001) \
	||	((oid) == 1002) \
	||	((oid) == 1003) \
	||	((oid) == 1005) \
	||	((oid) == 1006) \
	||	((oid) == 1007) \
	||	((oid) == 1008) \
	||	((oid) == 1009) \
	||	((oid) == 1010) \
	||	((oid) == 1011) \
	||	((oid) == 1012) \
	||	((oid) == 1013) \
	||	((oid) == 1014) \
	||	((oid) == 1015) \
	||	((oid) == 1016) \
	||	((oid) == 1017) \
	||	((oid) == 1018) \
	||	((oid) == 1019) \
	||	((oid) == 1020) \
	||	((oid) == 1021) \
	||	((oid) == 1022) \
	||	((oid) == 1023) \
	||	((oid) == 1024) \
	||	((oid) == 1025) \
	||	((oid) == 1027) \
	||	((oid) == 1028) \
	||	((oid) == 1034) \
	||	((oid) == 1040) \
	||	((oid) == 1041) \
	||	((oid) == 1115) \
	||	((oid) == 1182) \
	||	((oid) == 1183) \
	||	((oid) == 1185) \
	||	((oid) == 1187) \
	||	((oid) == 1231) \
	||	((oid) == 1263) \
	||	((oid) == 1270) \
	||	((oid) == 1561) \
	||	((oid) == 1563) \
	||	((oid) == 2201) \
	||	((oid) == 2207) \
	||	((oid) == 2208) \
	||	((oid) == 2209) \
	||	((oid) == 2210) \
	||	((oid) == 2211) \
	||	((oid) == 2287) \
	||	((oid) == 2949) \
	||	((oid) == 2951) \
	||	((oid) == 3221) \
	||	((oid) == 3643) \
	||	((oid) == 3644) \
	||	((oid) == 3645) \
	||	((oid) == 3735) \
	||	((oid) == 3770) \
	||	((oid) == 3807) \
	||	((oid) == 3905) \
	||	((oid) == 3907) \
	||	((oid) == 3909) \
	||	((oid) == 3911) \
	||	((oid) == 3913) \
	||	((oid) == 3927) \
	||	((oid) == 4090) \
	||	((oid) == 4097) \
)
#endif
#ifndef PHP_PQ_TYPE_OF_ARRAY
# define PHP_PQ_TYPE_OF_ARRAY(oid) (\
	(oid) == 143 ? 142 : \
	(oid) == 199 ? 114 : \
	(oid) == 629 ? 628 : \
	(oid) == 651 ? 650 : \
	(oid) == 719 ? 718 : \
	(oid) == 791 ? 790 : \
	(oid) == 1000 ? 16 : \
	(oid) == 1001 ? 17 : \
	(oid) == 1002 ? 18 : \
	(oid) == 1003 ? 19 : \
	(oid) == 1005 ? 21 : \
	(oid) == 1006 ? 22 : \
	(oid) == 1007 ? 23 : \
	(oid) == 1008 ? 24 : \
	(oid) == 1009 ? 25 : \
	(oid) == 1010 ? 27 : \
	(oid) == 1011 ? 28 : \
	(oid) == 1012 ? 29 : \
	(oid) == 1013 ? 30 : \
	(oid) == 1014 ? 1042 : \
	(oid) == 1015 ? 1043 : \
	(oid) == 1016 ? 20 : \
	(oid) == 1017 ? 600 : \
	(oid) == 1018 ? 601 : \
	(oid) == 1019 ? 602 : \
	(oid) == 1020 ? 603 : \
	(oid) == 1021 ? 700 : \
	(oid) == 1022 ? 701 : \
	(oid) == 1023 ? 702 : \
	(oid) == 1024 ? 703 : \
	(oid) == 1025 ? 704 : \
	(oid) == 1027 ? 604 : \
	(oid) == 1028 ? 26 : \
	(oid) == 1034 ? 1033 : \
	(oid) == 1040 ? 829 : \
	(oid) == 1041 ? 869 : \
	(oid) == 1115 ? 1114 : \
	(oid) == 1182 ? 1082 : \
	(oid) == 1183 ? 1083 : \
	(oid) == 1185 ? 1184 : \
	(oid) == 1187 ? 1186 : \
	(oid) == 1231 ? 1700 : \
	(oid) == 1263 ? 2275 : \
	(oid) == 1270 ? 1266 : \
	(oid) == 1561 ? 1560 : \
	(oid) == 1563 ? 1562 : \
	(oid) == 2201 ? 1790 : \
	(oid) == 2207 ? 2202 : \
	(oid) == 2208 ? 2203 : \
	(oid) == 2209 ? 2204 : \
	(oid) == 2210 ? 2205 : \
	(oid) == 2211 ? 2206 : \
	(oid) == 2287 ? 2249 : \
	(oid) == 2949 ? 2970 : \
	(oid) == 2951 ? 2950 : \
	(oid) == 3221 ? 3220 : \
	(oid) == 3643 ? 3614 : \
	(oid) == 3644 ? 3642 : \
	(oid) == 3645 ? 3615 : \
	(oid) == 3735 ? 3734 : \
	(oid) == 3770 ? 3769 : \
	(oid) == 3807 ? 3802 : \
	(oid) == 3905 ? 3904 : \
	(oid) == 3907 ? 3906 : \
	(oid) == 3909 ? 3908 : \
	(oid) == 3911 ? 3910 : \
	(oid) == 3913 ? 3912 : \
	(oid) == 3927 ? 3926 : \
	(oid) == 4090 ? 4089 : \
	(oid) == 4097 ? 4096 : 0 \
)
#endif
#ifndef PHP_PQ_DELIM_OF_ARRAY
# define PHP_PQ_DELIM_OF_ARRAY(oid) (\
	(oid) == 16 ? '\054' : \
	(oid) == 17 ? '\054' : \
	(oid) == 18 ? '\054' : \
	(oid) == 19 ? '\054' : \
	(oid) == 20 ? '\054' : \
	(oid) == 21 ? '\054' : \
	(oid) == 22 ? '\054' : \
	(oid) == 23 ? '\054' : \
	(oid) == 24 ? '\054' : \
	(oid) == 25 ? '\054' : \
	(oid) == 26 ? '\054' : \
	(oid) == 27 ? '\054' : \
	(oid) == 28 ? '\054' : \
	(oid) == 29 ? '\054' : \
	(oid) == 30 ? '\054' : \
	(oid) == 32 ? '\054' : \
	(oid) == 71 ? '\054' : \
	(oid) == 75 ? '\054' : \
	(oid) == 81 ? '\054' : \
	(oid) == 83 ? '\054' : \
	(oid) == 114 ? '\054' : \
	(oid) == 142 ? '\054' : \
	(oid) == 143 ? '\054' : \
	(oid) == 194 ? '\054' : \
	(oid) == 199 ? '\054' : \
	(oid) == 210 ? '\054' : \
	(oid) == 325 ? '\054' : \
	(oid) == 600 ? '\054' : \
	(oid) == 601 ? '\054' : \
	(oid) == 602 ? '\054' : \
	(oid) == 603 ? '\073' : \
	(oid) == 604 ? '\054' : \
	(oid) == 628 ? '\054' : \
	(oid) == 629 ? '\054' : \
	(oid) == 650 ? '\054' : \
	(oid) == 651 ? '\054' : \
	(oid) == 700 ? '\054' : \
	(oid) == 701 ? '\054' : \
	(oid) == 702 ? '\054' : \
	(oid) == 703 ? '\054' : \
	(oid) == 704 ? '\054' : \
	(oid) == 705 ? '\054' : \
	(oid) == 718 ? '\054' : \
	(oid) == 719 ? '\054' : \
	(oid) == 790 ? '\054' : \
	(oid) == 791 ? '\054' : \
	(oid) == 829 ? '\054' : \
	(oid) == 869 ? '\054' : \
	(oid) == 1000 ? '\054' : \
	(oid) == 1001 ? '\054' : \
	(oid) == 1002 ? '\054' : \
	(oid) == 1003 ? '\054' : \
	(oid) == 1005 ? '\054' : \
	(oid) == 1006 ? '\054' : \
	(oid) == 1007 ? '\054' : \
	(oid) == 1008 ? '\054' : \
	(oid) == 1009 ? '\054' : \
	(oid) == 1010 ? '\054' : \
	(oid) == 1011 ? '\054' : \
	(oid) == 1012 ? '\054' : \
	(oid) == 1013 ? '\054' : \
	(oid) == 1014 ? '\054' : \
	(oid) == 1015 ? '\054' : \
	(oid) == 1016 ? '\054' : \
	(oid) == 1017 ? '\054' : \
	(oid) == 1018 ? '\054' : \
	(oid) == 1019 ? '\054' : \
	(oid) == 1020 ? '\073' : \
	(oid) == 1021 ? '\054' : \
	(oid) == 1022 ? '\054' : \
	(oid) == 1023 ? '\054' : \
	(oid) == 1024 ? '\054' : \
	(oid) == 1025 ? '\054' : \
	(oid) == 1027 ? '\054' : \
	(oid) == 1028 ? '\054' : \
	(oid) == 1033 ? '\054' : \
	(oid) == 1034 ? '\054' : \
	(oid) == 1040 ? '\054' : \
	(oid) == 1041 ? '\054' : \
	(oid) == 1042 ? '\054' : \
	(oid) == 1043 ? '\054' : \
	(oid) == 1082 ? '\054' : \
	(oid) == 1083 ? '\054' : \
	(oid) == 1114 ? '\054' : \
	(oid) == 1115 ? '\054' : \
	(oid) == 1182 ? '\054' : \
	(oid) == 1183 ? '\054' : \
	(oid) == 1184 ? '\054' : \
	(oid) == 1185 ? '\054' : \
	(oid) == 1186 ? '\054' : \
	(oid) == 1187 ? '\054' : \
	(oid) == 1231 ? '\054' : \
	(oid) == 1263 ? '\054' : \
	(oid) == 1266 ? '\054' : \
	(oid) == 1270 ? '\054' : \
	(oid) == 1560 ? '\054' : \
	(oid) == 1561 ? '\054' : \
	(oid) == 1562 ? '\054' : \
	(oid) == 1563 ? '\054' : \
	(oid) == 1700 ? '\054' : \
	(oid) == 1790 ? '\054' : \
	(oid) == 2201 ? '\054' : \
	(oid) == 2202 ? '\054' : \
	(oid) == 2203 ? '\054' : \
	(oid) == 2204 ? '\054' : \
	(oid) == 2205 ? '\054' : \
	(oid) == 2206 ? '\054' : \
	(oid) == 2207 ? '\054' : \
	(oid) == 2208 ? '\054' : \
	(oid) == 2209 ? '\054' : \
	(oid) == 2210 ? '\054' : \
	(oid) == 2211 ? '\054' : \
	(oid) == 2249 ? '\054' : \
	(oid) == 2275 ? '\054' : \
	(oid) == 2276 ? '\054' : \
	(oid) == 2277 ? '\054' : \
	(oid) == 2278 ? '\054' : \
	(oid) == 2279 ? '\054' : \
	(oid) == 2280 ? '\054' : \
	(oid) == 2281 ? '\054' : \
	(oid) == 2282 ? '\054' : \
	(oid) == 2283 ? '\054' : \
	(oid) == 2287 ? '\054' : \
	(oid) == 2776 ? '\054' : \
	(oid) == 2949 ? '\054' : \
	(oid) == 2950 ? '\054' : \
	(oid) == 2951 ? '\054' : \
	(oid) == 2970 ? '\054' : \
	(oid) == 3115 ? '\054' : \
	(oid) == 3220 ? '\054' : \
	(oid) == 3221 ? '\054' : \
	(oid) == 3310 ? '\054' : \
	(oid) == 3500 ? '\054' : \
	(oid) == 3614 ? '\054' : \
	(oid) == 3615 ? '\054' : \
	(oid) == 3642 ? '\054' : \
	(oid) == 3643 ? '\054' : \
	(oid) == 3644 ? '\054' : \
	(oid) == 3645 ? '\054' : \
	(oid) == 3734 ? '\054' : \
	(oid) == 3735 ? '\054' : \
	(oid) == 3769 ? '\054' : \
	(oid) == 3770 ? '\054' : \
	(oid) == 3802 ? '\054' : \
	(oid) == 3807 ? '\054' : \
	(oid) == 3831 ? '\054' : \
	(oid) == 3838 ? '\054' : \
	(oid) == 3904 ? '\054' : \
	(oid) == 3905 ? '\054' : \
	(oid) == 3906 ? '\054' : \
	(oid) == 3907 ? '\054' : \
	(oid) == 3908 ? '\054' : \
	(oid) == 3909 ? '\054' : \
	(oid) == 3910 ? '\054' : \
	(oid) == 3911 ? '\054' : \
	(oid) == 3912 ? '\054' : \
	(oid) == 3913 ? '\054' : \
	(oid) == 3926 ? '\054' : \
	(oid) == 3927 ? '\054' : \
	(oid) == 4089 ? '\054' : \
	(oid) == 4090 ? '\054' : \
	(oid) == 4096 ? '\054' : \
	(oid) == 4097 ? '\054' : \
	0 \
)
#endif
