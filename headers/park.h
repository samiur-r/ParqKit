#ifndef HEADERS_PARK_H_
#define HEADERS_PARK_H_

int park();
int add_lot(struct parking *p, int available_lots, int occupied);
int free_lot(struct parking *p, int lot_num);

#endif /* HEADERS_PARK_H_ */
