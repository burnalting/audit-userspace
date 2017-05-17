/*
 * normalize_record_map.h
 * Copyright (c) 2016-17 Red Hat Inc., Durham, North Carolina.
 * All Rights Reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Authors:
 *   Steve Grubb <sgrubb@redhat.com>
 */

#include <libaudit.h>

_S(AUDIT_USER, "sent-message")
_S(AUDIT_LOGIN, "changed-login-id-to")
_S(AUDIT_USER_AUTH, "authenticated")
_S(AUDIT_USER_ACCT, "was-authorized")
_S(AUDIT_USER_MGMT, "modified-user-account")
_S(AUDIT_CRED_ACQ, "acquired-credentials")
_S(AUDIT_CRED_DISP, "disposed-credentials")
_S(AUDIT_USER_START, "started-session")
_S(AUDIT_USER_END, "ended-session")
_S(AUDIT_USER_AVC, "access-permission")
_S(AUDIT_USER_CHAUTHTOK, "changed-password")
_S(AUDIT_USER_ERR, "caused-account-error")
_S(AUDIT_CRED_REFR, "refreshed-credentials")
_S(AUDIT_USYS_CONFIG, "changed-configuration")
_S(AUDIT_USER_LOGIN, "logged-in")
_S(AUDIT_USER_LOGOUT, "logged-out")
_S(AUDIT_ADD_USER, "added-user-account")
_S(AUDIT_DEL_USER, "deleted-user-account")
_S(AUDIT_ADD_GROUP, "added-group-account-to")
_S(AUDIT_DEL_GROUP, "deleted-group-account-from")
_S(AUDIT_DAC_CHECK, "access-result")
_S(AUDIT_CHGRP_ID, "changed-group")
_S(AUDIT_TEST, "sent-test")
_S(AUDIT_TRUSTED_APP, "unknown")
_S(AUDIT_USER_SELINUX_ERR, "access-error")
_S(AUDIT_USER_CMD, "ran-command")
_S(AUDIT_USER_TTY, "typed")
_S(AUDIT_CHUSER_ID, "changed-user-id")
_S(AUDIT_GRP_AUTH, "authenticated-to-group")
_S(AUDIT_SYSTEM_BOOT, "booted-system")
_S(AUDIT_SYSTEM_SHUTDOWN, "shutdown-system")
_S(AUDIT_SYSTEM_RUNLEVEL, "changed-to-runlevel")
_S(AUDIT_SERVICE_START, "started-service")
_S(AUDIT_SERVICE_STOP, "stopped-service")
_S(AUDIT_GRP_MGMT, "modified-group-account")
_S(AUDIT_GRP_CHAUTHTOK, "changed-group-password")
_S(AUDIT_MAC_CHECK, "mac-permission")
_S(AUDIT_ACCT_LOCK, "locked-account")
_S(AUDIT_ACCT_UNLOCK, "unlocked-account")
_S(AUDIT_DAEMON_START, "started-audit")
_S(AUDIT_DAEMON_END, "shutdown-audit")
_S(AUDIT_DAEMON_ABORT, "aborted-auditd-startup")
_S(AUDIT_DAEMON_CONFIG, "changed-auditd-configuration")
_S(AUDIT_DAEMON_RECONFIG, "reconfigured-auditd")
_S(AUDIT_DAEMON_ROTATE, "rotated-audit-logs")
_S(AUDIT_DAEMON_RESUME, "resumed-audit-logging")
_S(AUDIT_DAEMON_ACCEPT, "remote-audit-connected")
_S(AUDIT_DAEMON_CLOSE, "remote-audit-disconnected")
_S(AUDIT_DAEMON_ERR, "audit-error")
_S(AUDIT_CONFIG_CHANGE, "changed-audit-configuration")
//_S(AUDIT_KERNEL_OTHER,"")
//_S(AUDIT_NETFILTER_PKT,"")
//_S(AUDIT_NETFILTER_CFG,"")
_S(AUDIT_SECCOMP, "violated-seccomp-policy")
_S(AUDIT_FEATURE_CHANGE, "changed-audit-feature")
//_S(AUDIT_REPLACE,"")
_S(AUDIT_KERN_MODULE, "loaded-kernel-module")
_S(AUDIT_AVC, "violated-selinux-policy")
_S(AUDIT_MAC_POLICY_LOAD, "loaded-selinux-policy")
_S(AUDIT_MAC_STATUS, "changed-selinux-enforcement")
_S(AUDIT_MAC_CONFIG_CHANGE, "changed-selinux-boolean")
_S(AUDIT_ANOM_ABEND, "crashed-program")
_S(AUDIT_ANOM_LINK, "used-suspcious-link")
//_S(AUDIT_INTEGRITY_DATA,"")
//_S(AUDIT_INTEGRITY_METADATA,"")
//_S(AUDIT_INTEGRITY_STATUS,"")
//_S(AUDIT_INTEGRITY_HASH,"")
//_S(AUDIT_INTEGRITY_PCR,"")
//_S(AUDIT_INTEGRITY_RULE,"")
_S(AUDIT_KERNEL, "initialized-audit-subsystem")
_S(AUDIT_ANOM_LOGIN_FAILURES, "failed-log-in-too-many-times-to")
_S(AUDIT_ANOM_LOGIN_TIME, "attempted-log-in-during-unusual-hour-to")
_S(AUDIT_ANOM_LOGIN_SESSIONS, "opened-too-many-sessions-to")
//_S(AUDIT_ANOM_LOGIN_ACCT, "")
_S(AUDIT_ANOM_LOGIN_LOCATION, "attempted-log-in-from-unusual-place-to")
//_S(AUDIT_ANOM_MAX_DAC, "")
//_S(AUDIT_ANOM_MAX_MAC, "")
//_S(AUDIT_ANOM_AMTU_FAIL, "")
//_S(AUDIT_ANOM_RBAC_FAIL, "")
_S(AUDIT_ANOM_RBAC_INTEGRITY_FAIL, "tested-file-system-integrity-of")
//_S(AUDIT_ANOM_CRYPTO_FAIL, "")
//_S(AUDIT_ANOM_ACCESS_FS, "")
_S(AUDIT_ANOM_EXEC, "attempted-execution-of-forbidden-program")
//_S(AUDIT_ANOM_MK_EXEC, "")
//_S(AUDIT_ANOM_ADD_ACCT, "")
//_S(AUDIT_ANOM_DEL_ACCT, "")
//_S(AUDIT_ANOM_MOD_ACCT, "")
//_S(AUDIT_ANOM_ROOT_TRANS, "")
//_S(AUDIT_RESP_ANOMALY, "")
//_S(AUDIT_RESP_ALERT, "")
//_S(AUDIT_RESP_KILL_PROC, "")
//_S(AUDIT_RESP_TERM_ACCESS, "")
//_S(AUDIT_RESP_ACCT_REMOTE, "")
//_S(AUDIT_RESP_ACCT_LOCK_TIMED, "")
//_S(AUDIT_RESP_ACCT_UNLOCK_TIMED, "")
//_S(AUDIT_RESP_ACCT_LOCK, "")
//_S(AUDIT_RESP_TERM_LOCK, "")
//_S(AUDIT_RESP_SEBOOL, "")
//_S(AUDIT_RESP_EXEC, "")
//_S(AUDIT_RESP_SINGLE, "")
//_S(AUDIT_RESP_HALT, "")
_S(AUDIT_USER_ROLE_CHANGE, "changed-role-to")
_S(AUDIT_ROLE_ASSIGN, "assigned-user-role-to")
_S(AUDIT_ROLE_REMOVE, "removed-use-role-from")
_S(AUDIT_LABEL_OVERRIDE, "overrode-label-of")
_S(AUDIT_LABEL_LEVEL_CHANGE, "modified-level-of")
//_S(AUDIT_USER_LABELED_EXPORT, "")
//_S(AUDIT_USER_UNLABELED_EXPORT, "")
//_S(AUDIT_DEV_ALLOC, "")
//_S(AUDIT_DEV_DEALLOC, "")
_S(AUDIT_FS_RELABEL, "relabeled-filesystem")
_S(AUDIT_USER_MAC_POLICY_LOAD, "loaded-mac-policy")
_S(AUDIT_ROLE_MODIFY, "modified-role")
_S(AUDIT_USER_MAC_CONFIG_CHANGE, "changed-mac-configuration")
//_S(AUDIT_CRYPTO_TEST_USER, "")
//_S(AUDIT_CRYPTO_PARAM_CHANGE_USER, "")
_S(AUDIT_CRYPTO_LOGIN, "crypto-officer-logged-in")
_S(AUDIT_CRYPTO_LOGOUT, "crypto-officer-logged-out")
_S(AUDIT_CRYPTO_KEY_USER, "negotiated-crypto-key")
//_S(AUDIT_CRYPTO_FAILURE_USER, "")
//_S(AUDIT_CRYPTO_REPLAY_USER, "")
_S(AUDIT_CRYPTO_SESSION, "started-crypto-session")
//_S(AUDIT_CRYPTO_IKE_SA, "")
//_S(AUDIT_CRYPTO_IPSEC_SA, "")
_S(AUDIT_VIRT_CONTROL, "issued-vm-control")
_S(AUDIT_VIRT_RESOURCE, "assigned-vm-resource")
_S(AUDIT_VIRT_MACHINE_ID, "assigned-vm-id")
_S(AUDIT_VIRT_INTEGRITY_CHECK, "checked-integrity-of")
_S(AUDIT_VIRT_CREATE, "created-vm-image")
_S(AUDIT_VIRT_DESTROY, "deleted-vm-image")
_S(AUDIT_VIRT_MIGRATE_IN, "migrated-vm-from")
_S(AUDIT_VIRT_MIGRATE_OUT, "migrated-vm-to")
//_S(,"")

