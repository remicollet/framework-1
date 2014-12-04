
extern zend_class_entry *ice_pagination_ce;

ZEPHIR_INIT_CLASS(Ice_Pagination);

PHP_METHOD(Ice_Pagination, calculate);
PHP_METHOD(Ice_Pagination, floating);

ZEND_BEGIN_ARG_INFO_EX(arginfo_ice_pagination_floating, 0, 0, 0)
	ZEND_ARG_INFO(0, url)
	ZEND_ARG_ARRAY_INFO(0, parameters, 1)
	ZEND_ARG_INFO(0, countOut)
	ZEND_ARG_INFO(0, countIn)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(ice_pagination_method_entry) {
	PHP_ME(Ice_Pagination, calculate, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Ice_Pagination, floating, arginfo_ice_pagination_floating, ZEND_ACC_PUBLIC)
  PHP_FE_END
};
