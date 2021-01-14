#  Copyright (c) 2015 - 2020, Intel Corporation. All rights reserved.<BR>
#  Copyright (C) 2020, Red Hat, Inc.<BR>
#  SPDX-License-Identifier: BSD-2-Clause-Patent
__copyright__ = "Copyright (c) 2015 - 2016, Intel Corporation  All rights reserved."
class EmailAddressCheck:
    """Checks an email address."""

    def __init__(self, email, description):
        self.ok = True

        if email is None:
            self.error('Email address is missing!')
            return
        if description is None:
            self.error('Email description is missing!')
            return

        self.description = "'" + description + "'"
        self.check_email_address(email)

    def error(self, *err):
        if self.ok and Verbose.level > Verbose.ONELINE:
            print('The ' + self.description + ' email address is not valid:')
        self.ok = False
        if Verbose.level < Verbose.NORMAL:
            return
        count = 0
        for line in err:
            prefix = (' *', '  ')[count > 0]
            print(prefix, line)
            count += 1

    email_re1 = re.compile(r'(?:\s*)(.*?)(\s*)<(.+)>\s*$',
                           re.MULTILINE|re.IGNORECASE)

    def check_email_address(self, email):
        email = email.strip()
        mo = self.email_re1.match(email)
        if mo is None:
            self.error("Email format is invalid: " + email.strip())
            return

        name = mo.group(1).strip()
        if name == '':
            self.error("Name is not provided with email address: " +
                       email)
        else:
            quoted = len(name) > 2 and name[0] == '"' and name[-1] == '"'
            if name.find(',') >= 0 and not quoted:
                self.error('Add quotes (") around name with a comma: ' +
                           name)

        if mo.group(2) == '':
            self.error("There should be a space between the name and " +
                       "email address: " + email)

        if mo.group(3).find(' ') >= 0:
            self.error("The email address cannot contain a space: " +
                       mo.group(3))

        if ' via Groups.Io' in name and mo.group(3).endswith('@groups.io'):
            self.error("Email rewritten by lists DMARC / DKIM / SPF: " +
                       email)

        print (subject)

    # Find 'contributed-under:' at the start of a line ignoring case and
    # requires ':' to be present.  Matches if there is white space before
    # the tag or between the tag and the ':'.
    contributed_under_re = \
        re.compile(r'^\s*contributed-under\s*:', re.MULTILINE|re.IGNORECASE)

        match = self.contributed_under_re.search(self.msg)
        if match is not None:
            self.error('Contributed-under! (Note: this must be ' +
                       'removed by the code contributor!)')
            EmailAddressCheck(s[3], sig)
    cve_re = re.compile('CVE-[0-9]{4}-[0-9]{5}[^0-9]')

        if count >= 1 and re.search(self.cve_re, lines[0]):
            #
            # If CVE-xxxx-xxxxx is present in subject line, then limit length of
            # subject line to 92 characters
            #
            if len(lines[0].rstrip()) >= 93:
                self.error(
                    'First line of commit message (subject line) is too long (%d >= 93).' %
                    (len(lines[0].rstrip()))
                    )
        else:
            #
            # If CVE-xxxx-xxxxx is not present in subject line, then limit
            # length of subject line to 75 characters
            #
            if len(lines[0].rstrip()) >= 76:
                self.error(
                    'First line of commit message (subject line) is too long (%d >= 76).' %
                    (len(lines[0].rstrip()))
                    )
            if (len(lines[i]) >= 76 and
                #
                # Print a warning if body line is longer than 75 characters
                #
                print(
                    'WARNING - Line %d of commit message is too long (%d >= 76).' %
                    (i + 1, len(lines[i]))
                    )
                print(lines[i])
        self.new_bin = []
        if self.new_bin:
            print('\nWARNING - The following binary files will be added ' +
                  'into the repository:')
            for binary in self.new_bin:
                print('  ' + binary)
                 not line.startswith('\r\n') and  \
                 not line.startswith(r'\ No newline ') and not self.binary:
                self.filename = line[13:].split(' ', 1)[0]
                self.is_newfile = False
                self.force_crlf = True
                self.force_notabs = True
                if self.filename.endswith('.sh'):
                    #
                    # Do not enforce CR/LF line endings for linux shell scripts.
                    #
                    self.force_crlf = False
                if self.filename == '.gitmodules':
                    #
                    # .gitmodules is updated by git and uses tabs and LF line
                    # endings.  Do not enforce no tabs and do not enforce
                    # CR/LF line endings.
                    #
                    self.force_crlf = False
                    self.force_notabs = False
                self.binary = False
            elif line.startswith('GIT binary patch') or \
                 line.startswith('Binary files'):
                self.state = PATCH
                self.binary = True
                if self.is_newfile:
                    self.new_bin.append(self.filename)
            elif line.startswith('new file mode 160000'):
                #
                # New submodule.  Do not enforce CR/LF line endings
                #
                self.force_crlf = False
                self.is_newfile = self.newfile_prefix_re.match(line)
            if self.binary:
                pass
            elif line.startswith('-'):
            elif line.startswith('\r\n'):
                pass
        'copy from ',
        'copy to ',
    newfile_prefix_re = \
        re.compile(r'''^
                       index\ 0+\.\.
                   ''',
                   re.VERBOSE)
        if self.filename is not None:
            lines.append('File: ' + self.filename)
    old_debug_re = \
        re.compile(r'''
                        DEBUG \s* \( \s* \( \s*
                        (?: DEBUG_[A-Z_]+ \s* \| \s*)*
                        EFI_D_ ([A-Z_]+)
                   ''',
                   re.VERBOSE)

        if self.force_notabs and '\t' in line:
        mo = self.old_debug_re.search(line)
        if mo is not None:
            self.added_line_error('EFI_D_' + mo.group(1) + ' was used, '
                                  'but DEBUG_' + mo.group(1) +
                                  ' is now recommended', line)

        email_check = EmailAddressCheck(self.author_email, 'Author')
        email_ok = email_check.ok

        self.ok = email_ok and msg_ok and diff_ok
    subject_prefix_re = \
        re.compile(r'''^
                       \s* (\[
                        [^\[\]]* # Allow all non-brackets
                       \])* \s*
                   ''',
                   re.VERBOSE)

        #
        # Parse subject line from email header.  The subject line may be
        # composed of multiple parts with different encodings.  Decode and
        # combine all the parts to produce a single string with the contents of
        # the decoded subject line.
        #
        parts = email.header.decode_header(pmail.get('subject'))
        subject = ''
        for (part, encoding) in parts:
            if encoding:
                part = part.decode(encoding)
            else:
                try:
                    part = part.decode()
                except:
                    pass
            subject = subject + part
        self.commit_subject = subject.replace('\r\n', '')
        self.commit_subject = self.subject_prefix_re.sub('', self.commit_subject, 1)
        self.author_email = pmail['from']
            email = self.read_committer_email_address_from_git(commit)
            self.ok &= EmailAddressCheck(email, 'Committer').ok
        if not commits:
            print("Couldn't find commit matching: '{}'".format(rev_spec))
        return out.split() if out else []
        return self.run_git('show', '--pretty=email', '--no-textconv',
                            '--no-use-mailmap', commit)

    def read_committer_email_address_from_git(self, commit):
        # Run git to get the committer email
        return self.run_git('show', '--pretty=%cn <%ce>', '--no-patch',
                            '--no-use-mailmap', commit)
        Result = p.communicate()
        return Result[0].decode('utf-8', 'ignore') if Result[0] and Result[0].find(b"fatal")!=0 else None