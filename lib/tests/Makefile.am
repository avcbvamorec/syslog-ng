lib_tests_TESTS		= \
	lib/tests/test_log_message	\
	lib/tests/test_cfg_lexer_subst	\
	lib/tests/test_cfg_tree		\
	lib/tests/test_type_hints	\
	lib/tests/test_parse_number	\
	lib/tests/test_cache		\
	lib/tests/test_reloc		\
	lib/tests/test_hostname		\
	lib/tests/test_rcptid		\
	lib/tests/test_lexer        	\
	lib/tests/test_str_format   	\
	lib/tests/test_string_list	\
	lib/tests/test_runid        	\
	lib/tests/test_pathutils	\
	lib/tests/test_utf8utils	\
	lib/tests/test_userdb		\
	lib/tests/test_str-utils

check_PROGRAMS		+= ${lib_tests_TESTS}

noinst_PROGRAMS 	= \
	lib/tests/test_host_resolve

lib_tests_test_log_message_CFLAGS	=	\
	$(TEST_CFLAGS)
lib_tests_test_log_message_LDADD	=	\
	$(TEST_LDADD)

lib_tests_test_cfg_lexer_subst_CFLAGS	=	\
	$(TEST_CFLAGS)
lib_tests_test_cfg_lexer_subst_LDADD	=	\
	$(TEST_LDADD)

lib_tests_test_cfg_tree_CFLAGS		=	\
	$(TEST_CFLAGS)
lib_tests_test_cfg_tree_LDADD		=	\
	$(TEST_LDADD)

lib_tests_test_type_hints_CFLAGS	=	\
	$(TEST_CFLAGS)
lib_tests_test_type_hints_LDADD	=	\
	$(TEST_LDADD)

lib_tests_test_parse_number_CFLAGS	=	\
	$(TEST_CFLAGS)
lib_tests_test_parse_number_LDADD	=	\
	$(TEST_LDADD)

lib_tests_test_cache_CFLAGS	=	\
	$(TEST_CFLAGS)
lib_tests_test_cache_LDADD	=	\
	$(TEST_LDADD)

lib_tests_test_reloc_CFLAGS	=	\
	$(TEST_CFLAGS)
lib_tests_test_reloc_LDADD	=	\
	$(TEST_LDADD)

lib_tests_test_hostname_CFLAGS	=	\
	$(TEST_CFLAGS)
lib_tests_test_hostname_LDADD	=	\
	$(TEST_LDADD)

lib_tests_test_host_resolve_CFLAGS	=	\
	$(TEST_CFLAGS)
lib_tests_test_host_resolve_LDADD	=	\
	$(TEST_LDADD)

lib_tests_test_rcptid_CFLAGS = $(TEST_CFLAGS)
lib_tests_test_rcptid_LDADD	= \
	$(TEST_LDADD)

lib_tests_test_lexer_CFLAGS	=	\
	$(TEST_CFLAGS)
lib_tests_test_lexer_LDADD	=	\
	$(TEST_LDADD)

lib_tests_test_runid_CFLAGS	=	\
	$(TEST_CFLAGS)
lib_tests_test_runid_LDADD	=	\
	$(TEST_LDADD)

lib_tests_test_str_format_CFLAGS	=	\
	$(TEST_CFLAGS)
lib_tests_test_str_format_LDADD	=	\
	$(TEST_LDADD)

lib_tests_test_string_list_CFLAGS	=	\
	$(TEST_CFLAGS)
lib_tests_test_string_list_LDADD	=	\
	$(TEST_LDADD)

lib_tests_test_pathutils_CFLAGS	=	\
	$(TEST_CFLAGS)
lib_tests_test_pathutils_LDADD	=	\
	$(TEST_LDADD)

lib_tests_test_utf8utils_CFLAGS	=	\
	$(TEST_CFLAGS)
lib_tests_test_utf8utils_LDADD	=	\
	$(TEST_LDADD)

lib_tests_test_str_utils_CFLAGS	=	\
	$(TEST_CFLAGS)
lib_tests_test_str_utils_LDADD	=	\
	$(TEST_LDADD)

CLEANFILES				+= \
	test_values.persist		   \
	test_values.persist-		   \
	test_run_id.persist		   \
	test_run_id.persist-

lib_tests_test_userdb_LDADD	= \
	$(TEST_LDADD)
