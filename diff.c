static char *run_textconv(const char *, struct diff_filespec *, size_t *);
			      const char *textconv_one,
			      const char *textconv_two,
	const char *data_one, *data_two;
	diff_populate_filespec(one, 0);
	diff_populate_filespec(two, 0);
	if (textconv_one) {
		data_one = run_textconv(textconv_one, one, &size_one);
		if (!data_one)
			die("unable to read files to diff");
	}
	else {
		data_one = one->data;
		size_one = one->size;
	}
	if (textconv_two) {
		data_two = run_textconv(textconv_two, two, &size_two);
		if (!data_two)
			die("unable to read files to diff");
	}
	else {
		data_two = two->data;
		size_two = two->size;
	}
		fwrite(diff_words->current_plus,
				plus_begin - diff_words->current_plus, 1,
				diff_words->file);
		color_fwrite_lines(diff_words->file,
				diff_get_color(1, DIFF_FILE_OLD),
		color_fwrite_lines(diff_words->file,
				diff_get_color(1, DIFF_FILE_NEW),
		color_fwrite_lines(diff_words->file,
			diff_get_color(1, DIFF_FILE_OLD),
		fwrite(diff_words->current_plus,
			- diff_words->current_plus, 1,
			diff_words->file);
		line++;
		len--;
		emit_line(ecbdata->file, plain, reset, line, len);
static const char *get_textconv(struct diff_filespec *one)
	return one->driver->textconv;
	const char *textconv_one = NULL, *textconv_two = NULL;
		if (xfrm_msg)
			strbuf_addstr(&header, xfrm_msg);
		if (xfrm_msg)
			strbuf_addstr(&header, xfrm_msg);
		if (xfrm_msg)
			strbuf_addstr(&header, xfrm_msg);
	if (fill_mmfile(&mf1, one) < 0 || fill_mmfile(&mf2, two) < 0)
		die("unable to read files to diff");

	    ( (diff_filespec_is_binary(one) && !textconv_one) ||
	      (diff_filespec_is_binary(two) && !textconv_two) )) {
		if (textconv_one) {
			size_t size;
			mf1.ptr = run_textconv(textconv_one, one, &size);
			if (!mf1.ptr)
				die("unable to read files to diff");
			mf1.size = size;
		}
		if (textconv_two) {
			size_t size;
			mf2.ptr = run_textconv(textconv_two, two, &size);
			if (!mf2.ptr)
				die("unable to read files to diff");
			mf2.size = size;
		}
		if (DIFF_OPT_TST(o, COLOR_DIFF_WORDS)) {
		if (DIFF_OPT_TST(o, COLOR_DIFF_WORDS))
			  struct diff_filepair *p,
			  int use_color)
	const char *set = diff_get_color(use_color, DIFF_METAINFO);
	const char *reset = diff_get_color(use_color, DIFF_RESET);

		strbuf_addf(msg, "%ssimilarity index %d%%",
			    set, similarity_index(p));
		strbuf_addf(msg, "%s\n%scopy from ", reset, set);
		strbuf_addf(msg, "%s\n%scopy to ", reset, set);
		strbuf_addf(msg, "%s\n", reset);
		strbuf_addf(msg, "%ssimilarity index %d%%",
			    set, similarity_index(p));
		strbuf_addf(msg, "%s\n%srename from ", reset, set);
		strbuf_addf(msg, "%s\n%srename to ", reset, set);
		strbuf_addf(msg, "%s\n", reset);
			strbuf_addf(msg, "%sdissimilarity index %d%%%s\n",
				    set, similarity_index(p), reset);
		strbuf_addf(msg, "%sindex %.*s..%.*s", set,
		strbuf_addf(msg, "%s\n", reset);
	if (msg) {
		/*
		 * don't use colors when the header is intended for an
		 * external diff driver
		 */
		fill_metainfo(msg, name, other, one, two, o, p,
			      DIFF_OPT_TST(o, COLOR_DIFF) && !pgm);
		xfrm_msg = msg->len ? msg->buf : NULL;
	}

	if (!strcmp(arg, "-p") || !strcmp(arg, "-u"))
		DIFF_OPT_SET(options, COLOR_DIFF_WORDS);
		DIFF_OPT_SET(options, COLOR_DIFF_WORDS);
	q->queue = NULL;
	q->nr = q->alloc = 0;
	q->queue = NULL;
	q->nr = q->alloc = 0;
	outq.queue = NULL;
	outq.nr = outq.alloc = 0;
	outq.queue = NULL;
	outq.nr = outq.alloc = 0;