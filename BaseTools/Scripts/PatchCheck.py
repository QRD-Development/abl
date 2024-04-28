#  Copyright (c) 2015, Intel Corporation. All rights reserved.<BR>
#  This program and the accompanying materials are licensed and made
#  available under the terms and conditions of the BSD License which
#  accompanies this distribution. The full text of the license may be
#  found at http://opensource.org/licenses/bsd-license.php
#
#  THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS"
#  BASIS, WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER
#  EXPRESS OR IMPLIED.
__copyright__ = "Copyright (c) 2015, Intel Corporation  All rights reserved."
        cu_msg='Contributed-under: TianoCore Contribution Agreement 1.0'
        if self.msg.find(cu_msg) < 0:
            self.error('Missing Contributed-under! (Note: this must be ' +
                       'added by the code contributor!)')
            self.check_email_address(s[3])
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

        if count >= 1 and len(lines[0]) > 76:
            self.error('First line of commit message (subject line) ' +
                       'is too long.')
            if (len(lines[i]) > 76 and
                self.error('Line %d of commit message is too long.' % (i + 1))
                 not line.startswith(r'\ No newline '):
                self.set_filename(None)
            if line.startswith('+++ b/'):
                self.set_filename(line[6:].rstrip())
            if line.startswith('-'):
        'Binary files ',
    def set_filename(self, filename):
        self.hunk_filename = filename
        if filename:
            self.force_crlf = not filename.endswith('.sh')
        else:
            self.force_crlf = True
        if self.hunk_filename is not None:
            lines.append('File: ' + self.hunk_filename)
        if '\t' in line:
        self.ok = msg_ok and diff_ok
        self.commit_subject = pmail['subject'].replace('\r\n', '')
        pfx_start = self.commit_subject.find('[')
        if pfx_start >= 0:
            pfx_end = self.commit_subject.find(']')
            if pfx_end > pfx_start:
                self.commit_prefix = self.commit_subject[pfx_start + 1 : pfx_end]
                self.commit_subject = self.commit_subject[pfx_end + 1 :].lstrip()

        return out.split()
        return self.run_git('show', '--pretty=email', commit)
        return p.communicate()[0].decode('utf-8', 'ignore')